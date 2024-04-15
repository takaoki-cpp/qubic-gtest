enable_testing()

# Find Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS} ${CMAKE_SOURCE_DIR}/src)

# Add test executable
add_executable(test_exe test_main.cpp ../src/operations.cpp ../src/utils/utils.cpp)
target_link_libraries(test_exe ${GTEST_LIBRARIES} pthread)

# Specify the C++ standard
set_property(TARGET test_exe PROPERTY CXX_STANDARD 11)

# Add subdirectory for utils tests
add_subdirectory(utils)
