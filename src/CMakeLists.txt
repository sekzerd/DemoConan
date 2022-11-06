aux_source_directory("." SRCS)
add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})