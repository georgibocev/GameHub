cmake_minimum_required(VERSION 3.5.1)

project(CounterStrike)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(PISTOL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Pistols)

add_executable(
    ${PROJECT_NAME}
    ${PISTOL_DIR}/DesertEagle.cpp
    ${PISTOL_DIR}/Glock.cpp
    ${PISTOL_DIR}/Pistol.cpp
    ${PISTOL_DIR}/PistolFactory.cpp
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/Player.cpp
)

set_target_cpp_standard(${PROJECT_NAME} 14) 
enable_target_warnings(${PROJECT_NAME})
set_up_clean_mechanism(CounterStrike)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/Pistols)