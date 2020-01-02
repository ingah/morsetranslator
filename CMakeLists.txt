cmake_minimum_required(VERSION 3.15)
project(morsetranslator)

set(CMAKE_CXX_STANDARD 14)

add_executable(morsetranslator Main.cpp MorseTranslator.h)
add_library (test_library STATIC Main.cpp)

add_subdirectory(test)