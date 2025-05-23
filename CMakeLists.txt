cmake_minimum_required(VERSION 3.31)
project(the_ultimate_cpp_series)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        the_ultimate_cpp_series
        main.cpp
        part-1-fundamentals/1-the-basics/3_sales_tax_calculator.cpp
        part-1-fundamentals/1-the-basics/1_swap_variables.cpp
        part-1-fundamentals/1-the-basics/2_calculate_expression.cpp
)
