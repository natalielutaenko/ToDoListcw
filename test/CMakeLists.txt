project(tests)

set(test1_source main.cpp)
add_executable(test1 ${test1_source})

add_test(FirstTest test1 hello 3)

set_tests_properties(FirstTest PROPERTIES
PASS_REGULAR_EXPRESSION "The result ok"
FAIL_REGULAR_EXPRESSION "Error!")