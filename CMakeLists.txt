cmake_minimum_required(VERSION 3.31)
project(the_ultimate_cpp_series)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        the_ultimate_cpp_series
        main.cpp
        playground.cpp
        # Part 1: Fundamentals
            # 1. The Basics
                part-1-fundamentals/1-the-basics/1_swap_variables.cpp
                part-1-fundamentals/1-the-basics/2_calculate_expression.cpp
                part-1-fundamentals/1-the-basics/3_sales_tax_calculator.cpp
                part-1-fundamentals/1-the-basics/4_calculate_user_age.cpp
                part-1-fundamentals/1-the-basics/5_fahrenheit_to_celsius.cpp
                part-1-fundamentals/1-the-basics/6_area_of_a_circle.cpp
            # 2. Fundamental Data Types
                part-1-fundamentals/2-fundamental-data-types/1_roll_the_dice.cpp
                part-1-fundamentals/2-fundamental-data-types/2_formatted_output_table.cpp
                part-1-fundamentals/2-fundamental-data-types/3_address_input_using_getline.cpp
                part-1-fundamentals/2-fundamental-data-types/4_storing_and_retrieving_data_from_an_array.cpp
                part-1-fundamentals/2-fundamental-data-types/5_type_conversion.cpp
            # 3. Decision Making
                part-1-fundamentals/3-decision-making/1_job_eligibility.cpp
                part-1-fundamentals/3-decision-making/2_commission_calculation.cpp
                part-1-fundamentals/3-decision-making/3_larger_number.cpp
                part-1-fundamentals/3-decision-making/4_basic_calculator_using_switch.cpp
                part-1-fundamentals/4-loops/1_factorial-calculator.cpp
        part-1-fundamentals/4-loops/2_average-temperature.cpp
)
