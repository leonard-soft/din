cmake_minimum_required(VERSION 3.10)

project(din)

add_executable(din 
src/main.cpp
src/app/app.cpp
src/equals/equals.cpp
src/struct_builder/struct_builder.cpp
src/directory_creator/directory_creator.cpp)

install(TARGETS din DESTINATION bin)