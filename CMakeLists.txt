cmake_minimum_required(VERSION 3.25)
project(libcli C)

set(CMAKE_C_STANDARD 11)

add_library(libcli libcli.c utils.c utils.h)
