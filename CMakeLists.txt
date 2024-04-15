cmake_minimum_required(VERSION 3.12)

project(wifi_car)

set(PICO_BOARD pico_w)

set(PICO_CYW43_SUPPORTED 1)

include(pico_sdk_import.cmake)

pico_sdk_init()

add_executable(${CMAKE_PROJECT_NAME}
        main.c
        )

target_link_libraries(${CMAKE_PROJECT_NAME}
        pico_stdlib              # for core functionality
        pico_cyw43_arch_none     # we need Wifi to access the GPIO, but we don't need anything else
        )

# create map/bin/hex file etc.
pico_add_extra_outputs(${CMAKE_PROJECT_NAME})

# add url via pico_set_program_url
# example_auto_set_url(picow_blink)

