cmake_minimum_required(VERSION 3.10)
project(CppBasics)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "*.cpp")

foreach(SOURCE ${SOURCES})
    get_filename_component(TARGET_NAME ${SOURCE} NAME_WE)
    add_executable(${TARGET_NAME} ${SOURCE})
endforeach()
