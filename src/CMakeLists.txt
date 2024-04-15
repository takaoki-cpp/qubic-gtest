# Add the main application executable
add_executable(main_exe main.cpp operations.cpp utils/utils.cpp)

# Specify where CMake can find header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/utils)

# Specify the C++ standard
set_property(TARGET main_exe PROPERTY CXX_STANDARD 11)
