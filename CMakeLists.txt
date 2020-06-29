cmake_minimum_required(VERSION 2.8)
project(Cpp_Stack)

# set(CMAKE_BUILD_TYPE "Release")
# set(CMAKE_CXX_FLAGS "-O3")

# # 添加Eigen头文件
# # include_directories("/usr/include/eigen3")
# # include_directories("funclib")

# 生成可执行文件
# # add_executable(demo demo.cpp)
# # add_executable(demodlib demodlib.cpp)
# # add_executable(svm_ex svm_ex.cpp)
# add_executable(caller caller.cpp)




set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_STANDARD 11)

# 根目录/代码路径
aux_source_directory(. DIR_MAIN)

#dubug 模式------------------这个非常重要，否则无法进入断点
set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

# 添加子目录
include_directories("${PROJECT_SOURCE_DIR}/include")
add_subdirectory(src)

# 编译成可执行文件
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build) ###### bin，改成build文件，2019.10.17
add_executable(hello1 ${DIR_MAIN})

# 链接hellolib库，注意下面子目录src的CMakeLists
link_directories("${PROJECT_SOURCE_DIR}/lib")
target_link_libraries(hello1 hellolib)


