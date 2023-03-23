cmake_minimum_required(VERSION 3.24)
project(TP_Allegro_Cours C)

set(CMAKE_C_STANDARD 11)

add_executable(TP_Allegro_Cours main.c)
target_link_libraries(TP_Allegro_Cours -lmingw32 -lallegro-5.0.10-monolith-md-debug)