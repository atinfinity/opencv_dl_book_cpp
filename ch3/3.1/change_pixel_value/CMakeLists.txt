cmake_minimum_required(VERSION 3.6)

project(change_pixel_value)

# Require C++17 (or later)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find OpenCV
find_package(OpenCV REQUIRED)

if(OpenCV_FOUND)
  include_directories(${OpenCV_INCLUDE_DIRS})
  add_executable(${PROJECT_NAME} change_pixel_value.cpp)
  target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})
endif()
