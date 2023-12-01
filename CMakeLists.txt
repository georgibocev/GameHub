cmake_minimum_required(VERSION 3.5.1)

project(mainProject)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers_c.cmake)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Starcraft)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Warcraft)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/CounterStrike)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/RGBTask)
