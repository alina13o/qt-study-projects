#include "DatabaseManager.h"



DatabaseManager *DatabaseManager::getInstance()
{
    static DatabaseManager instance;
    return &instance;
}

void DatabaseManager::connect(QString dbName)
{
    _database = QSqlDatabase::addDatabase("QSQLITE");
    _database.setDatabaseName(dbName);
    if (_database.open()) {
        _log.info("Успешное соединение с базой данных.");
    } else {
        _log.error("Ошибка соединения с базой данных." + _database.lastError().text());
        exit(EXIT_FAILURE);
    }
}

void DatabaseManager::createTables()
{
    QSqlQuery query;
    query.prepare("CREATE TABLE IF NOT EXISTS users("
                  "id INTEGER PRIMARY KEY, "
                  "login TEXT UNIQUE, "
                  "password TEXT, "
                  "is_admin BOOLEAN DEFAULT 0)");
    if (! query.exec()) {
        _log.warning("Ошибка создания таблица users. " + query.lastError().text());
    }
    query.prepare("CREATE TABLE IF NOT EXISTS client("
                  "id INTEGER PRIMARY KEY, "
                  "name TEXT , "
                  "surname TEXT, "
                  "patronymic TEXT, "
                  "phone TEXT UNIQUE, "
                  "email TEXT UNIQUE )");
    if (! query.exec()) {
        _log.warning("Ошибка создания таблица client. " + query.lastError().text());
    }
    query.prepare("CREATE TABLE IF NOT EXISTS book("
                  "id INTEGER PRIMARY KEY, "
                  "name TEXT , "
                  "surname TEXT, "
                  "patronymic TEXT, "
                  "country TEXT, "
                  "city TEXT, "
                  "hotel TEXT, "
                  "people TEXT, "
                  "sum TEXT UNIQUE )");
    if (! query.exec()) {
        _log.warning("Ошибка создания таблица book. " + query.lastError().text());
    }
    query.prepare("CREATE TABLE IF NOT EXISTS city_cost("
                  "id INTEGER PRIMARY KEY, "
                  "city TEXT  , "
                  "cost INTEGER)");
    query.prepare("CREATE TABLE IF NOT EXISTS hotel_cost("
                  "id INTEGER PRIMARY KEY, "
                  "hotel TEXT  , "
                  "cost INTEGER)");
}
