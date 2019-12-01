project(tests)

set(test1_source test.cpp)
add_executable(test1 ${test1_source})
target_link_libraries(test1 engine)

add_test(NAME Test1 COMMAND test1)