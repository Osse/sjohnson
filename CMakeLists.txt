cmake_minimum_required(VERSION 2.8.11)

project(sjohnson)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Widgets)

add_executable(sjohnson WIN32 main.cpp pic.qrc)
target_link_libraries(sjohnson Qt5::Widgets)
