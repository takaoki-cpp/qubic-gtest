# Find Google Test package
find_package(GTest REQUIRED)

# Include the necessary directories
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/utils)

# Define the source files for the test executable
set(UTILS_TEST_SOURCES
    test_utils.cpp
    ${CMAKE_SOURCE_DIR}/src/utils/utils.cpp  # Include the utils.cpp file
)

# Add the test executable
add_executable(test_utils ${UTILS_TEST_SOURCES})

# Link against Google Test and pthread
target_link_libraries(test_utils ${GTEST_BOTH_LIBRARIES} pthread)
