#include <stdio.h>

  struct Student {
      char name[20];
      int score;
      int id;
  };

  int main() {
      struct Student students[3];

      for (int i = 0; i < 3; i++) {
          printf("\n--- 学生 %d ---\n", i + 1);

          // 学号 — 失败了就重试
          printf("学号：");
          while (scanf("%d", &students[i].id) != 1) {
              printf("⚠️ 输入的不是数字，重新输入学号：");
              while (getchar() != '\n');  // 清掉缓冲区里的垃圾
          }

          printf("姓名：");
          scanf("%19s", students[i].name);

          // 成绩 — 同样加保护
          printf("成绩：");
          while (scanf("%d", &students[i].score) != 1) {
              printf("⚠️ 输入的不是数字，重新输入成绩：");
              while (getchar() != '\n');
          }
      }

      printf("\n===== 成绩单 =====\n");
      for (int i = 0; i < 3; i++) {
          printf("%d | %s | %d分\n",
              students[i].id,
              students[i].name,
              students[i].score);
      }

      return 0;
  }
