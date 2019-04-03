cmake_minimum_required(VERSION 3.13)
project(fdf_reloaded C)

set(CMAKE_C_STANDARD 99)

add_executable(fdf_reloaded main.c fdf.h vector.c map.c keys_events.c draw.c transformation.c)