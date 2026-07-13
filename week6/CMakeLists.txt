  cmake_minimum_required(VERSION 3.13)
  include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

  project(hello_lcd)
  pico_sdk_init()

  add_executable(hello_lcd hello_lcd.c)
  target_link_libraries(hello_lcd pico_stdlib hardware_i2c)
  pico_add_extra_outputs(hello_lcd)
