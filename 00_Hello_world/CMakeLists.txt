# Ceres Solver - A fast non-linear least squares minimizer
# Copyright 2022 Google Inc. All rights reserved.
# http://ceres-solver.org/
#
# Author : Thibault SCHWEITZER

# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

#Project name
project(helloworld)

# target
add_executable(helloworld helloworld.cc)

# External libs
find_package(Ceres REQUIRED)
# or find_package(Ceres REQUIRED PATHS "/path/to/install/dir") if the install directory is not in your PATH

target_include_directories(helloworld PRIVATE ${CERES_INCLUDE_DIRS})
target_link_libraries(helloworld PRIVATE ${CERES_LIBRARIES})
#target_link_libraries(helloworld PRIVATE Ceres::ceres)
