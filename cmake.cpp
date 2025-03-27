//cmake_minimum_required(VERSION 3.10)
//project(CmakeCpp)
//include_directories(include)
//
//# Define a function to create and link a library
//function(create_library_and_link exec_name lib_name source_file)
//add_library(${ lib_name } STATIC ${ source_file })
//target_link_libraries(${ exec_name } ${ lib_name })
//endfunction()
//
//# Macro to add a library and link it to the executable
//macro(create_library_and_link_macro exec_name lib_name)
//add_library(${ lib_name } STATIC src / ${ lib_name }.cpp)
//target_link_libraries(${ exec_name } ${ lib_name })
//endmacro()
//
//# Define source files for the executable
//set(SOURCE_FILES src / main.cpp src / ThirdAction.cpp)
//add_executable(hello ${ SOURCE_FILES })
//
//# Use only one of the following :
//# Either use the function :
//create_library_and_link(hello utils src / utils.cpp)
//
//# OR use the macro :
//# create_library_and_link_macro(hello utils)  # Commented out to prevent duplicate errors
