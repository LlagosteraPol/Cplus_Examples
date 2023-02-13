
#include <stdio.h>
#include <stdlib.h>
#include "sqlite3.h"
#include <sstream>
#include <string>

using namespace std;
//g++ -c insert.cpp
//g++ -o insert insert.o sqlite3.o

int main(int argc, char* argv[])
{
   sqlite3 *db; 
   string sql;
   sqlite3_stmt *test_stmt;

   int rc = sqlite3_open("test.db", &db);
   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(-1);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }

   //std::stringstream companystr;

   //sql = "INSERT INTO events VALUES('16-08-1992',1,2)"; // doesn't work with less values than expected
   //sql = "INSERT INTO events VALUES('16-08-1992',1,2, 'HAHA')"; // doesn't work with less values than expected
   //sql = "INSERT INTO events (timestamp, level, type, message) VALUES(?,?,?,?)"; // doesn't work with less values than expected
   sql = "INSERT INTO events (timestamp, level, type) VALUES(?,?,?)"; // doesn't work with less values than expected

   sqlite3_prepare_v2(db, sql.c_str(), -1, &test_stmt, NULL);


   sqlite3_bind_text(test_stmt, 1, "16-08-1992", -1, SQLITE_TRANSIENT);
   sqlite3_bind_int(test_stmt, 2, 1);
   sqlite3_bind_int(test_stmt, 3, 2);
   //sqlite3_bind_text(test_stmt, 4, "HOHO", -1, SQLITE_TRANSIENT);


   rc = sqlite3_step(test_stmt);

   if (rc  != SQLITE_DONE) {
         printf("execution failed: %s\n", sqlite3_errmsg(db));
         sqlite3_finalize(test_stmt);
         return -1;
   }

   sqlite3_finalize(test_stmt);
   sqlite3_close(db);

   return 0;
}