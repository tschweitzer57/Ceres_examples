# Author : Thibault SCHWEITZER

# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

#Project name
project(uav)

# target
add_executable(main main.cpp src/uav.cpp)
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)