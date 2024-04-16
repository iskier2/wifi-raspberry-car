cmake_minimum_required(VERSION 3.13)

project(wifi_car)

set(PICO_BOARD pico_w)

include(pico_sdk_import.cmake)


pico_sdk_init()

execute_process(COMMAND
    py makefsdata.py
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}
)

add_executable(${CMAKE_PROJECT_NAME}
    main.c
)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}
)
target_link_libraries(${CMAKE_PROJECT_NAME} 
    pico_cyw43_arch_lwip_threadsafe_background
    pico_lwip_http
    pico_stdlib
)

pico_enable_stdio_usb(${CMAKE_PROJECT_NAME} 1)
pico_enable_stdio_uart(${CMAKE_PROJECT_NAME} 0)

pico_add_extra_outputs(${CMAKE_PROJECT_NAME})