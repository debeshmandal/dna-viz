set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(QT_DIR ${SOURCE_DIR}/qt)
set(OPENGL_DIR ${SOURCE_DIR}/opengl)

QT5_ADD_RESOURCES(OPENGL_RESOURCES ${OPENGL_DIR}/resources/opengl.qrc)

set(OPENGL_SOURCES
    ${OPENGL_DIR}/geometryengine.cpp
    ${OPENGL_RESOURCES}
)

set(QT_SOURCES
    ${QT_DIR}/mainwindow.cpp
    ${QT_DIR}/viewer.cpp
    ${QT_DIR}/utilities.cpp
    ${OPENGL_SOURCES}
)

set(DNAVIZ_SOURCES 
    ${DNAVIZ_SOURCES}
    ${SOURCE_DIR}/main.cpp
    ${QT_SOURCES}
)

include_directories(include ${SOURCE_DIR})
include_directories(include ${OPENGL_INCLUDE_DIRS})
include_directories(include ${GLUT_INCLUDE_DIR})

### OpenGL
set(OPENGL_LIB dnaviz-opengl)
add_library(${OPENGL_LIB} ${OPENGL_SOURCES})
target_link_libraries(${OPENGL_LIB}
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARIES}
    Qt5::Widgets 
    Qt5::OpenGL
)


### Qt

set(QT_LIB dnaviz-qt)
add_library(${QT_LIB} ${QT_SOURCES})
target_link_libraries(
    ${QT_LIB} 
    Qt5::Widgets 
    Qt5::OpenGL
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARIES}
    ${OPENGL_LIB}
)

### DNA-Viz
set(DNAVIZ_LIB dnaviz-main)
add_library(${DNAVIZ_LIB} ${DNAVIZ_SOURCES})
target_link_libraries(
    ${DNAVIZ_LIB}
    ${QT_LIB}
    ${OPENGL_LIB}
)

### DNA-Viz executable
set(DNAVIZ_EXE dnaviz)
add_executable(${DNAVIZ_EXE} ${DNAVIZ_SOURCES})
target_link_libraries(${DNAVIZ_EXE} ${DNAVIZ_LIB})
