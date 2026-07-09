#include <stdio.h>

  struct Student {
      char name[20];
      int score;
      int id;
  };

  int main() {
      struct Student students[3];  // 3个学生的数组

      // 输入
      for (int i = 0; i < 3; i++) {
          printf("\n--- 学生 %d ---\n", i + 1);
          printf("学号：");
          scanf("%d", &students[i].id);
          printf("姓名：");
          scanf("%19s", students[i].name);
          printf("成绩：");
          scanf("%d", &students[i].score);
      }

      // 输出
      printf("\n===== 成绩单 =====\n");
      for (int i = 0; i < 3; i++) {
          printf("%d | %s | %d分\n",
              students[i].id,
              students[i].name,
              students[i].score);
      }

      return 0;
  }
