cmake_minimum_required(VERSION 3.31)
project(the_ultimate_cpp_series)

set(CMAKE_CXX_STANDARD 23)

add_executable(
        the_ultimate_cpp_series
        main.cpp
        playground/playground.cpp
        playground/playground.h
        # Part 1: Fundamentals
            # 1. The Basics
                part-1-fundamentals/1-the-basics/1_swap_variables.cpp
                part-1-fundamentals/1-the-basics/2_calculate_expression.cpp
                part-1-fundamentals/1-the-basics/3_sales_tax_calculator.cpp
                part-1-fundamentals/1-the-basics/4_calculate_user_age.cpp
                part-1-fundamentals/1-the-basics/5_fahrenheit_to_celsius.cpp
                part-1-fundamentals/1-the-basics/6_area_of_a_circle.cpp
                part-1-fundamentals/1-the-basics/basics.h
            # 2. Fundamental Data Types
                part-1-fundamentals/2-fundamental-data-types/1_roll_the_dice.cpp
                part-1-fundamentals/2-fundamental-data-types/2_formatted_output_table.cpp
                part-1-fundamentals/2-fundamental-data-types/3_address_input_using_getline.cpp
                part-1-fundamentals/2-fundamental-data-types/4_storing_and_retrieving_data_from_an_array.cpp
                part-1-fundamentals/2-fundamental-data-types/5_type_conversion.cpp
                part-1-fundamentals/2-fundamental-data-types/fundamental-data-types.h
            # 3. Decision Making
                part-1-fundamentals/3-decision-making/1_job_eligibility.cpp
                part-1-fundamentals/3-decision-making/2_commission_calculation.cpp
                part-1-fundamentals/3-decision-making/3_larger_number.cpp
                part-1-fundamentals/3-decision-making/4_basic_calculator_using_switch.cpp
                part-1-fundamentals/3-decision-making/decision-making.h
            # 4. Loops
                part-1-fundamentals/4-loops/1_factorial-calculator.cpp
                part-1-fundamentals/4-loops/2_average-temperature.cpp
                part-1-fundamentals/4-loops/3_secret_number.cpp
                part-1-fundamentals/4-loops/4_secret_number_simplified.cpp
                part-1-fundamentals/4-loops/5_star_pattern.cpp
                part-1-fundamentals/4-loops/loops.h
            # 5. Functions
                part-1-fundamentals/5-functions/1_max_of_two_numbers.cpp
                part-1-fundamentals/5-functions/functions.h

        # Part 2: Intermediate
            # 1. Arrays
                part-2-intermediate/1-arrays/1_copy_from_one_array_to_another.cpp
                part-2-intermediate/1-arrays/2_comparing_arrays.cpp
                part-2-intermediate/1-arrays/3_structured_binding.cpp
                part-2-intermediate/1-arrays/4_linear_search_algorithm.cpp
                part-2-intermediate/1-arrays/5_bubble_sort_algorithm.cpp
                part-2-intermediate/1-arrays/6_multi_dimensional_array.cpp
                part-2-intermediate/1-arrays/arrays.h
            # 2. Pointers
                part-2-intermediate/2-pointers/1_modify_with_pointers.cpp
                part-2-intermediate/2-pointers/2_swap_variable_values_using_pointers.cpp
                part-2-intermediate/2-pointers/3_reverse_iteration_using_pointer.cpp
                part-2-intermediate/2-pointers/pointers.h
            # 3. Strings
                part-2-intermediate/3-strings/1_searching_characters_in_strings.cpp
                part-2-intermediate/3-strings/strings.h
)
