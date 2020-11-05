cmake_minimum_required(VERSION 3.16)
project( Pixel )

# include OpenCV
find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable( Pixel pixel.cpp )
target_link_libraries( Pixel ${OpenCV_LIBS} )