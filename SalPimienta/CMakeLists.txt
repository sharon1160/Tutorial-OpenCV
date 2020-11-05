cmake_minimum_required(VERSION 3.16)
project( SalPimienta )

# include OpenCV
find_package( OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable( SalPimienta SalPimienta.cpp )
target_link_libraries( SalPimienta ${OpenCV_LIBS} )