project(tests)
enable_testing()

find_package (Boost COMPONENTS unit_test_framework REQUIRED)

set(test1_source main.cpp)
add_executable(test1 ${test1_source})


add_test(NAME Test1 COMMAND test1)