#include <stdio.h>

int main() {
  int age =18;
  float price =9.90;
  double pi = 3.1415926;
  char grade = 'A';

  printf("int 占 %zu 字节\n",sizeof(int));
  printf("float 占 %zu 字节\n",sizeof(float));
  printf("double 占 %zu 字节\n",sizeof(double));
  printf("char 占 %zu 字节\n",sizeof(char));
    return 0;
}
