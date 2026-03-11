cmake_minimum_required(VERSION 3.20)
project(lab_3_1)

set(CMAKE_CXX_STANDARD 17)

# 1. Основна програма
add_executable(lab_3_1_main main.cpp)

# 2. Google Test
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

# 3. Тести (лінкуємо з gtest_main, щоб не писати main у UnitTest.cpp)
add_executable(lab_3_1_tests UnitTest.cpp)
target_link_libraries(lab_3_1_tests gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(lab_3_1_tests)