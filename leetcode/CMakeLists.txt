
include_directories(
)

link_directories(
)

file(GLOB SOURCE_FILES  *.cpp)

add_library(leetcode STATIC ${SOURCE_FILES})



