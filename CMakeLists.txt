cmake_minimum_required(VERSION 2.8.4)
project(libmy)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")

set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

include_directories(include)

link_directories(lib)

file(
	GLOB_RECURSE
	SOURCE_FILES
	include/*.h
	src/*.c
)

file(
	GLOB_RECURSE
	TESTS_FILES
	include/*.h
	tests/*.c
)

add_library(
	my
	STATIC
	${SOURCE_FILES}
)

add_executable(test-libmy ${TESTS_FILES})

target_link_libraries(
	test-libmy
	my
)
