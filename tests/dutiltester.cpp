/**
 * Copyright (C) 2017 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#include "dutiltester.h"

#include <QCoreApplication>
#include <QtTest/QtTest>
#include <QStandardPaths>
#include <QThread>

#include "log/LogManager.h"
#include "filesystem/dpathbuf.h"
#include "singletontester.h"

DCORE_USE_NAMESPACE

TestDUtil::TestDUtil()
{

}

void TestDUtil::testLogPath()
{
    qApp->setOrganizationName("deepin");
    qApp->setApplicationName("deepin-test-dtk");

    DPathBuf logPath(QStandardPaths::standardLocations(QStandardPaths::HomeLocation).first());
    logPath = logPath / ".cache/deepin/deepin-test-dtk/deepin-test-dtk.log";

    QCOMPARE(DLogManager::getlogFilePath(), logPath.toString());
}

void TestDUtil::testPathChange()
{
    DPathBuf root("/");

    auto usr = root / "./usr";
    QCOMPARE(QDir(usr.toString()).absolutePath(), QDir::toNativeSeparators("/usr"));

    root /= "root";
    QCOMPARE(root.toString(), QDir::toNativeSeparators("/root"));

    root /= "../usr";
    QCOMPARE(root.toString(), usr.toString());
}

void TestDUtil::testDSingleton()
{
    auto threadA = new QThread;
    auto testerA = new MultiSingletonTester;
    connect(threadA, &QThread::started, testerA, &MultiSingletonTester::run);
    testerA->moveToThread(threadA);

    auto threadB = new QThread;
    auto testerB = new MultiSingletonTester;
    testerB->moveToThread(threadB);
    connect(threadB, &QThread::started, testerB, &MultiSingletonTester::run);

    threadA->start();
    threadB->start();

    QThread::sleep(5);
}

