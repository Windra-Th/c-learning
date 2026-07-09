#include <stdio.h>

int main() {
  int choice = 1;
  float a,b,result;
  while (choice != 0) {
    printf("=====简易计算器=====\n1.加法\n2.减法\n3.乘法\n4.除法\n请选择：");
    scanf("%d",&choice);
    if (choice == 0) break;
    printf("输入两个数：");
    scanf("%f %f",&a,&b);
    switch (choice) {
      case 1 : result=a+b;  printf("%.2f",result);  break;
      case 2 : result=a-b;  printf("%.2f",result);  break;
      case 3 : result=a*b;  printf("%.2f",result);  break;
      case 4 : if (b==0) { printf("分母错误");
               }
               else { result=a/b;  printf("%.2f",result);
               }
               break;
      default : printf("无用");
    }
  }
  printf("再见！");
  return 0;
}
