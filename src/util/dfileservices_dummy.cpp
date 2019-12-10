/*
 * Copyright (C) 2017 ~ 2017 Deepin Technology Co., Ltd.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "dfileservices.h"

DCORE_BEGIN_NAMESPACE

static QStringList urls2uris(const QList<QUrl> &urls)
{
    QStringList list;

    list.reserve(urls.size());

    for (const QUrl url : urls) {
        list << url.toString();
    }

    return list;
}

static QList<QUrl> path2urls(const QList<QString> &paths)
{
    QList<QUrl> list;

    list.reserve(paths.size());

    for (const QString &path : paths) {
        list << QUrl::fromLocalFile(path);
    }

    return list;
}

bool DFileServices::showFolder(QString localFilePath, const QString &startupId)
{
    Q_UNUSED(localFilePath);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFolders(const QList<QString> localFilePaths, const QString &startupId)
{
    Q_UNUSED(localFilePaths);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFolder(QUrl url, const QString &startupId)
{
    Q_UNUSED(url);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFolders(const QList<QUrl> urls, const QString &startupId)
{
    Q_UNUSED(urls);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItemPropertie(QString localFilePath, const QString &startupId)
{
    Q_UNUSED(localFilePath);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItemProperties(const QList<QString> localFilePaths, const QString &startupId)
{
    Q_UNUSED(localFilePaths);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItemPropertie(QUrl url, const QString &startupId)
{
    Q_UNUSED(url);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItemProperties(const QList<QUrl> urls, const QString &startupId)
{
    Q_UNUSED(urls);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItem(QString localFilePath, const QString &startupId)
{
    Q_UNUSED(localFilePath);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItems(const QList<QString> localFilePaths, const QString &startupId)
{
    Q_UNUSED(localFilePaths);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItem(QUrl url, const QString &startupId)
{
    Q_UNUSED(url);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::showFileItems(const QList<QUrl> urls, const QString &startupId)
{
    Q_UNUSED(urls);
    Q_UNUSED(startupId);
    return false;
}

bool DFileServices::trash(QString localFilePath)
{
    Q_UNUSED(localFilePath);
    return false;
}

bool DFileServices::trash(const QList<QString> localFilePaths)
{
    Q_UNUSED(localFilePaths);
    return false;
}

bool DFileServices::trash(QUrl url)
{
    Q_UNUSED(url);
    return false;
}

bool DFileServices::trash(const QList<QUrl> urls)
{
    Q_UNUSED(urls);
    return false;
}


QString DFileServices::errorMessage()
{
    return QString();
}

DCORE_END_NAMESPACE
