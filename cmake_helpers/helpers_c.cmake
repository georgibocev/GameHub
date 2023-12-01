cmake_minimum_required(VERSION 3.5.1)

function(set_target_cpp_standard target standard)
    set_target_properties(
        ${target} 
        PROPERTIES
            CXX_STANDARD ${standard}
            CXX_STANDARD_REQUIRED YES
            CXX_EXTENSIONS NO
    )
endfunction()

function(enable_target_warnings target)
    if(CMAKE_CXX_COMPILER_ID MATCHES MSVC) # Microsoft Visual Studio Compiler
        target_compile_options(
            ${target}
                PRIVATE
                  /W4
                  /WX
        )
        return()
    endif()
    
    # GCC and Clang
    target_compile_options(
        ${target}
            PRIVATE
              -Wall
              -Wextra
              -Werror
              -Wundef
              -Wuninitialized
              -Wshadow
              -Wpointer-arith
              -Wcast-align
              -Wcast-qual
              -Wunused-parameter
              -Wdouble-promotion
              -Wnull-dereference
    )
    
    if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
        #supported only in GNU
        target_compile_options(
          ${target}
              PRIVATE
                -Wlogical-op
                -Wduplicated-cond
                -Wduplicated-branches
        )
    endif()
endfunction()

function(set_up_clean_mechanism target)
    add_custom_target(${target}-clean-all
        COMMAND ${CMAKE_COMMAND} --build . --target clean
        COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/build/${target}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )

    set_target_properties(${target}-clean-all PROPERTIES
        DESCRIPTION "Clean all build files for ${target}"
    )

endfunction()