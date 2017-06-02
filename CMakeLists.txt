cmake_minimum_required(VERSION 3.7)
project(in_lab)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        w3_in_lab.cpp CRA_Account.cpp CRA_Account.h)

add_executable(in_lab ${SOURCE_FILES} CRA_Account.cpp CRA_Account.h)