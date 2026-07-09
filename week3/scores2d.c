#include <stdio.h>
int scores[100][100];
int line;
int column;
void input_scores();
void show_scores();

int main() {
input_scores();
show_scores();
}

//数据输入
void input_scores() {
  printf("几个学生？");
  scanf("%d",&line);
  printf("几门科目？");
  scanf("%d",&column);

  for (int i = 0; i < line; i++) {
    printf("第%d个学生：\n",i + 1);
    for (int j = 0; j < column;j++) {
      scanf("%d",&scores[i][j]);
      printf("\n");
    }
  }
}
//数据输出
void show_scores() {
  for (int i = 0; i < line; i++) {
    printf("第%d个学生：",i + 1);
    for (int j = 0; j < column;j++) {
      printf("%d  ",scores[i][j]);
    }
    printf("\n");
  }
}
