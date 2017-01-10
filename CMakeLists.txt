cmake_minimum_required(VERSION 3.6)
project(EngineTestGame)

set(CMAKE_CXX_STANDARD 14)

set(LIB_ROOT     "C:/MinGW")
set(LIB_Includes "${LIB_ROOT}/include")
set(LibDir   "${LIB_ROOT}/lib")


set(SOURCE_FILES main.cpp)
add_executable(EngineTestGame ${SOURCE_FILES})

target_link_libraries(EngineTestGame libEngine)