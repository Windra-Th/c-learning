#include <stdio.h>

struct Student {
  char name[20];
  int score;
  int id;
};

int main() {
  struct Student s1;

  printf("请输入学号：");
  scanf("%d",&s1.id);
  printf("请输入姓名：");
  scanf("%19s",s1.name);
  printf("请输入成绩：");
  scanf("%d",&s1.score);

  printf("\n=====学生信息=====\n");
  printf("学号：%d\n",s1.id);
  printf("姓名：%s\n",s1.name);
  printf("成绩：%d\n",s1.score);

  return 0;
}
