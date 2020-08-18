cmake_minimum_required(VERSION 3.10)
project(DNA-VIZ VERSION 1.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets OpenGL Core REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

add_subdirectory(src)