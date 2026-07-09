//目标：利用结构体和指针实现修改不同成员内容的功能
#include <stdio.h>
#include <string.h>

struct Student {char name[20];float score;int id;};
struct Student s1;
struct Student *p = &s1;

void update_name(struct Student *p,const char *name) {
  strcpy(p->name,name);
}

int main() {
  scanf("%s %f %d",p->name,&p->score,&p->id);
  printf("%s,%f,%d",s1.name,s1.score,s1.id);

  update_name(p,"阿五");
  printf("%s,%f,%d\n",p->name,p->score,p->id);

  return 0;
}
