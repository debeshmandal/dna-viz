set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(QT_DIR ${SOURCE_DIR}/qt)

set(QT_SOURCES
    ${QT_DIR}/mainwindow.cpp
    ${QT_DIR}/viewer.cpp
)

set(DNAVIZ_SOURCES 
    ${DNAVIZ_SOURCES}
    ${SOURCE_DIR}/main.cpp
    ${QT_SOURCES}
)

include_directories(include ${QT_DIR})
include_directories(include ${OPENGL_INCLUDE_DIRS})
include_directories(include ${GLUT_INCLUDE_DIR})

#Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

set(QT_LIB dnaviz-qt)
add_library(${QT_LIB} ${QT_SOURCES})
target_link_libraries(
    ${QT_LIB} 
    Qt5::Widgets 
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARIES}
)

set(DNAVIZ_LIB dnaviz-main)
add_library(${DNAVIZ_LIB} ${DNAVIZ_SOURCES})
target_link_libraries(
    ${DNAVIZ_LIB}
    ${QT_LIB}
)

set(DNAVIZ_EXE dnaviz)
add_executable(${DNAVIZ_EXE} ${DNAVIZ_SOURCES})
target_link_libraries(${DNAVIZ_EXE} ${DNAVIZ_LIB})
