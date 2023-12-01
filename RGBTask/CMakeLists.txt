cmake_minimum_required(VERSION 3.5.1)

project(RGBTaskk)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)




add_library(RGBTaskLib SHARED lib/longest_sequence_lib.c lib/longest_sequence_lib.h)
target_include_directories(RGBTaskLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(RGBTaskLib PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib
)

add_executable(
    ${PROJECT_NAME} 
    ${SRC_DIR}/RGBTask.cpp
    ${SRC_DIR}/LongestSequenceProcessor.cpp

)
target_link_libraries(${PROJECT_NAME} PRIVATE RGBTaskLib)


set_target_cpp_standard(${PROJECT_NAME} 11) 
enable_target_warnings(${PROJECT_NAME})
set_up_clean_mechanism(${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include())
