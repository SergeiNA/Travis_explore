cmake_minimum_required(VERSION 3.2)

project(test_CI VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

find_package(Threads REQUIRED)

add_executable(test_CI test.cpp)

set_target_properties(test_CI PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)

target_link_libraries(test_CI
    Threads::Threads
)

install(TARGETS test_CI RUNTIME DESTINATION bin)