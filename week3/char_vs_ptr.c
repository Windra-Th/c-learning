#include <stdio.h>

int main() {
  char s1[] = "hello";
  char *s2 = "hello";

  printf("===== 大小 =====\n");
  printf("sizeof(s1) = %lu  ← 数组", sizeof(s1));
  printf("sizeof(s2) = %lu  ← 指针", sizeof(s2));

  printf("\n===== 地址 =====\n");
  printf("s1:%p \n",s1);
  printf("s2:%p \n",s2);
//尝试修改
  printf("\n===== 尝试修改 =====\n");
  s1[0] = 'H';
  printf("改大写：%s \n",s1);
  printf("重新指向");
  s2 = "world";
  printf("s2: %s\n",s2);

  return 0;
}
