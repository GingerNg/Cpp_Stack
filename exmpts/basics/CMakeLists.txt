project(basics)

############################################################
# Create a library
############################################################

#Generate the static library from the library sources
add_library(basic_library STATIC
    src/hello.cpp
    src/algo_jingsai_rumen.cpp
    src/ptr_demo.cpp
)

target_include_directories(basic_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(${PROJECT_NAME} basic_main.cpp)

# link the new hello_library target with the hello_binary target
target_link_libraries( ${PROJECT_NAME}
    PRIVATE
    basic_library
)