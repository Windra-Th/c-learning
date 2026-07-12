#include "pico/stdlib.h"

#define BUTTON_PIN 16
#define LED_PIN 15

int main() {
//初始化设置
  gpio_init(BUTTON_PIN);
  gpio_init(LED_PIN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  gpio_set_dir(BUTTON_PIN, GPIO_IN);
  gpio_pull_down(BUTTON_PIN);
//按钮信号(轮询)
  while (true) {
    if (gpio_get(BUTTON_PIN) == 1) {
      gpio_put(LED_PIN, 1);
    } else {
      gpio_put(LED_PIN, 0);
    }
  }
}
