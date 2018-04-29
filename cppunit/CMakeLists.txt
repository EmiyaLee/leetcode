set(LEETCODE_DIR ${CMAKE_SOURCE_DIR}/leetcode)

include_directories(
	${LEETCODE_DIR}
	/home/lihualin/workspace/include
	)
	
link_directories(
	/home/lihualin/workspace/lib64
	)

file(GLOB SOURCE_FILES  *.cpp)

file(GLOB LEETCODE_FILES ${LEETCODE_DIR}/*.cpp )

add_executable(cppunit ${SOURCE_FILES} ${LEETCODE_FILES})

target_link_libraries(cppunit
	gtest
	gtest_main
	)
	


