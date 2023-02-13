//g++ -c createTable.cpp
//g++ -o createTable createTable.o sqlite3.o

#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
   sqlite3 *db;
   char *error = 0;
   int res;
   string sql;

   /* Open database */
   res = sqlite3_open("test.db", &db);
   if (res)
     {
       fprintf(stderr, "No puedo abrir la base de datos: %s\n", sqlite3_errmsg(db));
       exit(0);
     }
   else
     {
       fprintf(stderr, "Base de datos OK\n");
     }
   /* Create SQL statement */
   sql = "CREATE TABLE events ("
     "`timestamp` DATETIME, "
     "`level` NUMBER, "
     "`type` NUMBER, "
     "`message` TEXT)";

   /* Execute SQL statement */
   res = sqlite3_exec(db, sql.c_str(), NULL, 0, &error);
   if (res != SQLITE_OK)
     {
       fprintf(stderr, "Error: %s\n", error);
       sqlite3_free(error);
     }
   else
     {
       fprintf(stdout, "Tabla creada!\n");
     }

   sqlite3_close(db);

   return 0;
}