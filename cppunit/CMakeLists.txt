set(LEETCODE_DIR ${CMAKE_SOURCE_DIR}/leetcode)

message(${GTEST_CFLAGS})
message(${GTEST_CFLAGS_OTHER})
message(${GTEST_LDFLAGS})
message(${GTEST_LDFLAGS_OTHER})
message(${GTEST_LIBRARIES})
message(${GTEST_MAIN_LIBRARIES})

include_directories(
	${LEETCODE_DIR}
    # ${GTEST_INCLUDE_DIRS}
	)
	
link_directories(
    ${GTEST_LIBRARY_DIRS}
	)

add_compile_options(${GTEST_CFLAGS} ${GTEST_MAIN_CFLAGS})

file(GLOB SOURCE_FILES  *.cpp)

file(GLOB LEETCODE_FILES ${LEETCODE_DIR}/*.cpp )

add_executable(cppunit ${SOURCE_FILES} ${LEETCODE_FILES})

target_link_libraries(cppunit
    ${GTEST_LIBRARIES}
    ${GTEST_MAIN_LIBRARIES}
	)


