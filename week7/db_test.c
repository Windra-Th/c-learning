#include <stdio.h>
#include <libpq-fe.h>

int main() {
//连接数据库
  PGconn *conn = PQconnectdb("dbname=windra");

  if (PQstatus(conn) != CONNECTION_OK) {
      printf("连接失败: %s\n", PQerrorMessage(conn));
      return 1;
  }
  printf("数据库连接成功!\n");
  // 查 scores 表
  PGresult *res = PQexec(conn, "SELECT * FROM scores");
  // 打印结果：几行几列
  int rows = PQntuples(res);
  int cols = PQnfields(res);
  printf("查到 %d 行:\n", rows);

  for (int i = 0; i < rows; i++) {
    printf("  %s: %s分\n",
           PQgetvalue(res, i, 0),   // 第i行第0列（name）
           PQgetvalue(res, i, 1));  // 第i行第1列（score）
  }
  PQclear(res);
  PQfinish(conn);
  return 0;
}
