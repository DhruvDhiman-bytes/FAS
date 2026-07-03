cmake_minimum_reqiured(VERSION 3.13)

include(pico_sdk_import.cmake)

project(FAS C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(FAS
    main.c
)

target_link_libraries(FAS
    pico_stdlib
    hardware_adc
)

#Enable USB serial for printf()

pico_enable_stdio_usb(FAS 1)
pico_enable_stdio_uart(FAS 0)

pico_add_extra_output(FAS)
