cmake_minimum_required(VERSION 3.12)
project(Sandbox VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(external/MadEngine)

add_executable(${PROJECT_NAME} src/Sandbox.cpp)

target_link_libraries(${PROJECT_NAME} MadEngine)
target_include_directories(${PROJECT_NAME} PRIVATE MadEngine)
