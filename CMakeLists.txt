set(PROJECT_NAME "DemoConan")
set(CXX_STANDARD_REQUIRED 17)
project(${PROJECT_NAME})
cmake_minimum_required(VERSION 3.11)

include(${PROJECT_SOURCE_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory("src")
