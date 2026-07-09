#include <stdio.h>
int scores[5] = {89,90,88,67,79};
int count = 5;

void inversion();

int main() {
  inversion();
  for (int i = 0; i < count; i++) {
    printf("%d  ",scores[i]);
  }
  return 0;
}
//反转
void inversion() {
  for (int i = 0; i+1 <= (float)count/2; i++) {
    int temp = scores[i];
    scores[i] = scores[count -i -1];
    scores[count -i -1] = temp;
  }
}
