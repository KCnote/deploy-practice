cmake_minimum_required(VERSION 3.10)
project(deploy-project)

include(CTest)
enable_testing()

include(cmake/CMakeGenLib.cmake)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE structlib)

install(TARGETS ${PROJECT_NAME} 
	RUNTIME DESTINATION bin
)

install(TARGETS structlib 
	RUNTIME DESTINATION bin 
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)

add_executable(test_svstring tests/test_svstring.cpp)
target_link_libraries(test_svstring PRIVATE structlib)

add_test(NAME SVStringTest COMMAND test_svstring)