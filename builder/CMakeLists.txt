CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(builder)
AUX_SOURCE_DIRECTORY( . DIR_SRC)
ADD_SUBDIRECTORY(src)
ADD_EXECUTABLE(main ${DIR_SRC})
TARGET_LINK_LIBRARIES(main builder_lib)