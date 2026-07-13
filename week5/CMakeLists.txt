  cmake_minimum_required(VERSION 3.13)
  include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

  project(external_led)
  pico_sdk_init()

add_executable(external_led external_led.c)
target_link_libraries(external_led pico_stdlib)
pico_add_extra_outputs(external_led)

add_executable(button_led button_led.c)
target_link_libraries(button_led pico_stdlib)
pico_add_extra_outputs(button_led)

add_executable(counter_led counter_led.c)
target_link_libraries(counter_led pico_stdlib)
pico_add_extra_outputs(counter_led)





