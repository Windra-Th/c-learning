#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("========温度转换器========\n");
    printf("1.摄氏度 ➡  华氏度\n");
    printf("2.华氏度 ➡  摄氏度\n");
    printf("请选择（1或2）");
    scanf("%d",&choice);

    if (choice == 1) {
        printf("请输入摄氏度：");
        scanf("%f",&celsius);
        fahrenheit = celsius * 9.0 / 5.0 + 32;
        printf("\n%.2f℃ = %.2f℉\n",celsius,fahrenheit);
    } else if (choice == 2) {
        printf("请输入华氏度：");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("\n%.2f℉ = %.2f℃\n",fahrenheit,celsius);
    } else {
        printf("输入错误！只能选 1 或2\n");
    }
    return 0;
}
