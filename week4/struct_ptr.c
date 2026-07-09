#include <stdio.h>

struct Student {
  char name[20];
  int score;
  int id;
};

void update_score(struct Student *p,int new_score) {
  p->score = new_score;
}

void print_student(struct Student *p) {
  printf("学号：%d | 姓名：%s | 成绩：%d\n",p->id,p->name,p->score);
}

int main() {
  struct Student s1 = {"张三", 85, 1001};
  struct Student *p = &s1;

  printf("===== 修改前 =====\n");
  print_student(p);

  update_score(p, 95);

  printf("===== 修改后 =====\n");
  print_student(p);

  return 0;
}
