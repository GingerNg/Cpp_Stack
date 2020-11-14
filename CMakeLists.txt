CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

#项目名称
project(Cpp_Stack)

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
add_executable(main.out ${DIR_MAIN})

# 链接hellolib库，注意下面子目录src的CMakeLists
link_directories("${PROJECT_SOURCE_DIR}/lib")
target_link_libraries(main.out hellolib)




