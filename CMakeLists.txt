# set the minimum required version of CMake to be 3.20
cmake_minimum_required(VERSION 3.20)

# set the project name
project(Hello)

# add the executable target
add_executable(hello main.c)

# compiler options
target_compile_options(hello PRIVATE --cpu=cortex-m4)

# linker options
target_link_options(hello PRIVATE
  --cpu=cortex-m4
  --semihosting)