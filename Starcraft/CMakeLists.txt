cmake_minimum_required(VERSION 3.5.1)

project(Starcraft)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(
    ${PROJECT_NAME}
    ${SRC_DIR}/BattleCruser.cpp
    ${SRC_DIR}/BattleField.cpp
    ${SRC_DIR}/Carrier.cpp
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/Phoenix.cpp
    ${SRC_DIR}/ProtossAirShip.cpp
    ${SRC_DIR}/TeranAirShip.cpp
    ${SRC_DIR}/Viking.cpp
)

set_target_cpp_standard(${PROJECT_NAME} 11) 
enable_target_warnings(${PROJECT_NAME})


target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)