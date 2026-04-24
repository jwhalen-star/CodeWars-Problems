# Complementary DNA

**Source:** https://www.codewars.com/kata/554e4a2f232cdd87d9000038/train/cpp

**Difficulty:** 7 kyu

**Language:** C++

## Problem 

Given a DNA string, return its complementary strand.

Each nucleotide maps as follows:
- A ↔ T
- C ↔ G

## Solution Summary

The function is passed a std::string class object by const reference, meaning the string itself cannot be modified, and returns a new std::string class object (by value). In order to return a properly modified version of the string, a new string must be created by assigning the value of the string object that is passed into the function to a new local string variable (pass by copy). In order to ensure any modified values of the string are not accidentally changed back to their original value, the function reads from the const std::string object passed into the function, and writes to the new local string object declared within the function. Because the function reads from one string and writes to another, else if statements are not strictly necessary to ensure that only one condition executes for each character; however, they maintain functionality in that they are used to enable the logic of the function to act as quickly as possible (and also reinforce control flow correctness/exclusive results). Also, a string literal is literally an array of constant characters (const char[]) with a null terminator. So in a std::string object, each element is a char. So in order to modify a character in a string, values of type char must be assigned to individual elements. A string literal cannot be assigned to a single char element.

## Standard Library Usage

- `std::string::length()`  
  Returns the number of characters in the string as a `size_t` value and takes no parameters. In this solution, it is used to determine how many iterations are required to traverse the entire DNA sequence.

- `std::string`  
  A dynamic sequence container used to store and manipulate strings. In this problem, it is used to represent the DNA sequence and allows indexed access to modify individual characters.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)