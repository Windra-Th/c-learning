 #include <stdio.h>
  #include <stdlib.h>

  void print_element(int *arr, int index) {
      printf("元素值：%d\n", arr[index]);
  }

  void process_data(int *data, int size) {
      for (int i = 0; i <= size; i++) {  // 故意写 <= ，会访问 data[size]！
          print_element(data, i);
      }
  }

  int main() {
      int *data = (int*)malloc(5 * sizeof(int));
      for (int i = 0; i < 5; i++) {
          data[i] = (i + 1) * 10;
      }
      process_data(data, 5);  // data 共5个，process_data 会访问到 data[5]
      free(data);
      return 0;
  }
