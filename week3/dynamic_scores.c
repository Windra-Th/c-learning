#include <stdio.h>
#include <stdlib.h>

int main() {
  int count;

  printf("请输入学生人数：");
  scanf("%d",&count);
//内存分配
  int *scores = (int*)malloc(count * sizeof(int));
  if (scores == NULL) {
    printf("内存分配失败！\n");
    return 1;
  }
  for (int i = 0; i < count; i++) {
    printf("学生 %d 的成绩：", i + 1);
    scanf("%d",&scores[i]);
  }
  int sum = 0;
  for (int i = 0; i < count; i++) {
    sum += scores[i];
  }
  float avg = (float)sum / count;
//输出
  printf("\n===== 成绩单 =====\n");
  for (int i = 0; i < count; i++) {
    printf("学生 %d：%d 分\n",i+1,scores[i]);
  }
  printf("平均分：%.2f\n", avg);
  free(scores);

  return 0;
}
