cmake_minimum_required(VERSION 3.14)
project(tests)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include FetchContent module to download GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings (if needed)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Fetch and make GoogleTest available
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add the test source files
set(TEST_SRCS 
    main.cpp
    isalpha_tests.cpp
    isdigit_tests.cpp
    isalnum_tests.cpp)

# Create the test executable
add_executable(run_tests ${TEST_SRCS})

# Link the test executable with GoogleTest and your static library
target_link_libraries(run_tests gtest gtest_main ${CMAKE_SOURCE_DIR}/../libft.a)

# Include GoogleTest headers
target_include_directories(run_tests PRIVATE ${gtest_SOURCE_DIR}/googletest/include)

