cmake_minimum_required(VERSION 3.8)
project(KohonenMap)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Neuron.cpp Neuron.h)
add_executable(KohonenMap ${SOURCE_FILES})