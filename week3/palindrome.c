#include <stdio.h>
#include <string.h>
char some1[] = "hello";
char some2[] = "wow";
void palindrome(char some[]);

int main() {
  palindrome(some1);
  palindrome(some2);
  return 0;
}
//回环检测
void palindrome(char some[]) {
  int condition = 0;
  int count = strlen(some);
  for (int i = 0; i+1 <= count/2; i++) {
    if (some[i] != some[count-1-i]) {
    printf("不是回环");
    condition = 1;
    break;
    }
  }
  if (condition == 0) printf("是回环");
}
