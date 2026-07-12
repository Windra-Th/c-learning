#include "pico/stdlib.h"

#define LED_PIN 15
#define BTN_PIN 16

static int count = 0;
void button_pressed(uint gpio, uint32_t events) {
  count++;
  gpio_put(LED_PIN, !gpio_get(LED_PIN));
}

int main() {
//初始化设置
  gpio_init(BTN_PIN);
  gpio_init(LED_PIN);
  gpio_set_dir(BTN_PIN, GPIO_IN);
  gpio_set_dir(LED_PIN, GPIO_OUT);
  gpio_pull_down(BTN_PIN);
//设置中断
  gpio_set_irq_enabled_with_callback(BTN_PIN, GPIO_IRQ_EDGE_RISE, true,button_pressed);
  while (true) {
    tight_loop_contents();
  }
}
