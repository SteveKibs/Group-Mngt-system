/* Simple Program that connects to MySql Database Server */
#include<mysql.h>
#include<stdio.h>
main()
{
      MYSQL *conn;
      MYSQL_RES *res;
      MYSQL_ROW row;
      char *server = "localhost";
      char *user = "root";
      char *password = "PASSWORD";/*set me first */
      char *database = "mysql";
      conn = mysql_init(NULL);
      /*connect to database */
      
      }
