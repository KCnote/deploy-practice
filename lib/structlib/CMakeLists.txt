file(GLOB SRC_FILES "src/*.cpp")

add_library(structlib STATIC ${SRC_FILES})
target_include_directories(structlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)