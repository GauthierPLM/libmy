cmake_minimum_required(VERSION 2.8.4)
project(my)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c89")

set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

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
