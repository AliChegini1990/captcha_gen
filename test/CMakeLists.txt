cmake_minimum_required(VERSION 3.5)
project(test CXX)
aux_source_directory(test TEST)

include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME} test_main.cxx)

target_link_libraries(${PROJECT_NAME} 
                      PRIVATE 
                      ${CMAKE_SOURCE_DIR}/build/libcaptcha.so
                      ${OpenCV_LIBS}
                      )

