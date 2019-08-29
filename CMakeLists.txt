cmake_minimum_required(VERSION 3.14)
project(GB_emu)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --machine-windows")

add_executable(GB_emu main.cpp main.h CPU.cpp CPU.h)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(GB_emu ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
