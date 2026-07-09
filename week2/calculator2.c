#include <stdio.h>

//函数声明
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
void show_menu();

int main() {
    int choice = 1;
    float a, b;

    while (choice != 0) {
        show_menu();
        scanf("%d",&choice);
        if (choice == 0) break;

        printf("输入两个数：");
        scanf("%f %f",&a,&b);

        switch (choice) {
            case 1:
                printf("%.2f\n",add(a,b));
                break;
            case 2:
                printf("%.2f\n",sub(a,b));
                break;
            case 3:
                printf("%.2f\n",mul(a,b));
                break;
            case 4:
                if (b == 0) {
                    printf("分母错误\n");
                } else {
                    printf("%.2f\n",div(a,b));
                }
                break;
            default:
                printf("无效选项\n");
                break;
        }
    }

    printf("再见！\n");
    return 0;
}
void show_menu() {
    printf("=====简易计算器 v3=====\n1.加法  2.减法  3.乘法  4.除法  0.退出\n请选择：");
}
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }
