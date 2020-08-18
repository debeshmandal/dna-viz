set(sources main.cpp)

include_directories(include ${OPENGL_INCLUDE_DIRS})
include_directories(include ${_INCLUDE_DIR})

set(name_library dnaviz)
add_library(${name_library} ${sources})
target_link_libraries(
    ${name_library} 
    Qt5::Widgets 
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARIES}
)

set(name_executable DNA-VIZ)
add_executable(${name_executable} main.cpp)
target_link_libraries(${name_executable} ${name_library})
