cmake_minimum_required(VERSION 3.15)

project(lox VERSION 0.1)
set(CMAKE_EXPORT_COMPILECOMMANDS YES)
add_compile_options(-Wall -O2 -g -Werror)

aux_source_directory(./src SRC_LIST)
include_directories(./src/include)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/../bin)
add_executable(${PROJECT_NAME} ${SRC_LIST})