cmake_minimum_required(VERSION 3.5)

project(captcha C CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

aux_source_directory(src SRC)

find_package(OpenCV REQUIRED )
include_directories(${OpenCV_INCLUDE_DIRS} )


add_library(${PROJECT_NAME} SHARED ${SRC})

target_sources(${PROJECT_NAME} PRIVATE ${SRC})

target_link_libraries(${PROJECT_NAME} PRIVATE  ${OpenCV_LIBS} )

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

             
