#ifndef SQLITE_H
#define SQLITE_H
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include "character.h"

class Sqlite
{
public:
    Sqlite(const QString& path);
    ~Sqlite();

    bool isOpen() const;

    bool createTable();

    void saveCharacter();

    bool createCharacter();
    void updateCharacter(Character userCharacter);
private:
    QSqlDatabase  db;
};


#endif // SQLITE_H
