cmake_minimum_required(VERSION 3.10)

project(ListFiles)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost REQUIRED COMPONENTS filesystem)

add_executable(list_files main.cpp)

target_link_libraries(list_files Boost::filesystem)

install(TARGETS list_files DESTINATION /usr/bin)
