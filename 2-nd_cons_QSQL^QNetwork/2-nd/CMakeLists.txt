cmake_minimum_required(VERSION 3.14)

project(2-nd LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Sql Network)

add_executable(2-nd
  main.cpp
)
target_link_libraries(2-nd PRIVATE Qt6::Core Qt6::Sql Qt6::Network)

install(TARGETS 2-nd
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
