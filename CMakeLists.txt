cmake_minimum_required(VERSION 2.8)

project(newsuchsolver)

find_package(OpenMP)
if (OPENMP_FOUND)
 set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
 set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
endif()

#Bring the headers
include_directories(src/include)

file(GLOB_RECURSE SOURCES "src/*.cpp")


file(GLOB_RECURSE HEADERS  src/include/*.h)
add_library(SHARED ${HEADERS} ${SOURCES})

#set(EXECUTABLE_OUTPUT_PATH bin/)
#set(LIBRARY_OUTPUT_PATH bin/)

add_executable(${PROJECT_NAME} ${SOURCES})
