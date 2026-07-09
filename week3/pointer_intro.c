#include <stdio.h>

int main() {
  int x = 42;
  int *p = &x;	//储存x的地址

  printf("===== 值和地址 =====\n");
  printf("x = %d   \t(地址：%p)\n",x,&x);
  printf("p = %p   \t(p 本身存的地址)\n",p);
  printf("*p = %d   \t(去那个地址看看有什么)\n",*p);
  printf("&p = %p   \t(p 自己的地址！指针也是变量，也住在某个地方)\n", &p);

  printf("\n===== 通过 *p 修改 x =====\n");
  *p = 100;
  printf("x 现在是：%d\n",x);
  printf("*p 现在是：%d\n",*p);

  printf("\n===== 内存关系 =====\n");
  printf("&x == p  ?  %s\n",(&x == p)? "yes" : "no");

  return 0;
}
