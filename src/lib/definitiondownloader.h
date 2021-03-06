/*
    Copyright (C) 2016 Volker Krause <vkrause@kde.org>

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SYNTAXHIGHLIGHTING_DEFINITIONDOWNLOADER_H
#define SYNTAXHIGHLIGHTING_DEFINITIONDOWNLOADER_H

#include "kf5syntaxhighlighting_export.h"

#include <QObject>
#include <memory>

namespace SyntaxHighlighting {

class DefinitionDownloaderPrivate;
class Repository;

class KF5SYNTAXHIGHLIGHTING_EXPORT DefinitionDownloader : public QObject
{
    Q_OBJECT
public:
    explicit DefinitionDownloader(Repository *repo, QObject *parent = Q_NULLPTR);
    ~DefinitionDownloader();

    void start();

Q_SIGNALS:
    void informationMessage(const QString &msg);
    void done();

private:
    std::unique_ptr<DefinitionDownloaderPrivate> d;
};
}

#endif // SYNTAXHIGHLIGHTING_DEFINITIONDOWNLOADER_H
