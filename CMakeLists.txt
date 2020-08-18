cmake_minimum_required(VERSION 3.10)
project(DNA-VIZ VERSION 1.0)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_subdirectory(src)