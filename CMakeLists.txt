cmake_minimum_required(VERSION 3.29)
project(LeetCode)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCode main.cpp
        Problems/Longest_Common_Prefix.cpp
        Problems/Longest_Common_Prefix.h
        Problems/IsPalindrome.cpp
        Problems/IsPalindrome.h
        Problems/Find_the_Index_of_the_First_Occurence_in_a_String.cpp
        Problems/Find_the_Index_of_the_First_Occurence_in_a_String.h
        Problems/Search_Insert_Point.cpp
        Problems/Search_Insert_Point.h
        Problems/Length_of_Last_Word.cpp
        Problems/Length_of_Last_Word.h
        Problems/Plus_One.cpp
        Problems/Plus_One.h
 "Problems/Pow.cpp" "Problems/Pow.h" "Problems/First_Missing_Positive.cpp" "Problems/First_Missing_Positive.h" "Problems/Pascals_Triangle.cpp" "Problems/Pascals_Triangle.h" "Problems/Single_Number.cpp" "Problems/Single_Number.h")
