cmake_minimum_required(VERSION 3.19)

project(app_project)

add_executable(myapp hello.cc)

install(TARGETS myapp DESTINATION lib)
install(FILES hello.h DESTINATION include)