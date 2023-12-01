cmake_minimum_required(VERSION 3.5.1)

project(Warcraft)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(
    ${PROJECT_NAME}
    ${SRC_DIR}/Archmage.cpp
    ${SRC_DIR}/Heroes.cpp
    ${SRC_DIR}/HeroStorage.cpp
    ${SRC_DIR}/HeroAction.cpp
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/SpellDistributer.cpp
    ${SRC_DIR}/SpellStorage.cpp
    ${SRC_DIR}/DeathKnight.cpp
    ${SRC_DIR}/DrawRanger.cpp
      
)

set_target_cpp_standard(${PROJECT_NAME} 11) 
enable_target_warnings(${PROJECT_NAME})


target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)