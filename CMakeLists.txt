cmake_minimum_required(VERSION 3.12)
project(libmy C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS})

include_directories(include)

file(
	GLOB_RECURSE
	SOURCE_FILES
	include/*.h
	src/*.c
)

add_library(
	my
	STATIC
	${SOURCE_FILES}
)

target_include_directories(my PUBLIC include)
