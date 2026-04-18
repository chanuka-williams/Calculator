cmake_minimum_required(VERSION 3.20)
project(Calculator CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)

add_executable(Calculator main.cpp)

target_include_directories(Calculator PRIVATE ${GTKMM_INCLUDE_DIRS})
target_link_libraries(Calculator PRIVATE ${GTKMM_LIBRARIES})
target_compile_options(Calculator PRIVATE ${GTKMM_CFLAGS_OTHER})