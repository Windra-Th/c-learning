#include <stdio.h>

int main() {
  int arr[5] = {10,20,30,40,50};
  int neighbor = 999;
  printf("正常访问");
  for (int i = 0; i < 5;i++) {
    printf("arr[%d] = %d \t(地址：%p)\n",i,arr[i],&arr[i]);
  }
  printf("\nneighbor = %d \t(地址：%p)\n",neighbor,&neighbor);
//越界读取
  printf("\n==== 越界读取 ====\n");
  printf("arr[5] = %d \t(地址：%p)\n",arr[5],&arr[5]);
//越界写入
  printf("\n==== 越界写入 ====\n");
  arr[5] = 777;
  printf("arr[5] 现在是：%d \t(地址：%p)\n", arr[5], &arr[5]);
  printf("neighbor 现在是：%d\n 地址：%p",neighbor,&neighbor);

  return 0;
}
