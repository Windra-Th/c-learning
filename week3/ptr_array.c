#include <stdio.h>

  int main() {
      int arr[5] = {10, 20, 30, 40, 50};

      printf("===== 方式一：下标 arr[i] =====\n");
      for (int i = 0; i < 5; i++) {
          printf("arr[%d] = %d\n", i, arr[i]);
      }

      printf("\n===== 方式二：*(arr + i) =====\n");
      for (int i = 0; i < 5; i++) {
          printf("*(arr + %d) = %d\n", i, *(arr + i));
      }

      printf("\n===== 地址对比 =====\n");
      for (int i = 0; i < 5; i++) {
          printf("&arr[%d] = %p   |   arr+%d = %p   %s\n",
                 i, &arr[i], i, arr + i,
                 (&arr[i] == arr + i) ? "✅" : "❌");
      }

      printf("\n===== 甚至可以反过来写 =====\n");
      printf("0[arr] = %d  ← 眼花了？没错，arr[0]==0[arr]!\n", 0[arr]);

      return 0;
  }
