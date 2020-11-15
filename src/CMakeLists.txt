CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# generate lib
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
aux_source_directory(. DIR_SRC)
add_library(hellolib ${DIR_SRC})

