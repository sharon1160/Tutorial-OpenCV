cmake_minimum_required(VERSION 3.16)
project( FilasColumnas )

# include OpenCV
find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable( FilasColumnas main.cpp )
target_link_libraries( FilasColumnas ${OpenCV_LIBS} )