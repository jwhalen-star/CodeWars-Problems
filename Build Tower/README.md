# Build Tower

**Source:** https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/cpp

**Difficulty:** 6 kyu

**Language:** C++

## Problem 

Given a positive integer nFloors, construct a pyramid-shaped tower represented as a list of strings. Each string corresponds to a level of the tower, centered horizontally using spaces and built using the '*' character.

## Solution Summary

Of note, I am not building a program that builds a tower. Instead I am building a program that returns the data need to display a tower in the form of a vector populated with string objects. The number of floors determines the height of the tower. Importantly, the number of spaces on each floor on each side of the stars in the middle of a row is calculated counting down from nFloors - 1, and the number of stars in the middle of each row is calculated as the next consecutive odd number of stars. 

## Standard Library Usage

- `std::vector<std::string>`
  A dynamic array used to store each row of the tower as a separate string. Each constructed row is appended using `push_back()`.

- `std::string(size_t count, char ch)`
  This is an example of **constructor overloading** in C++. The `std::string` class provides multiple constructors that accept different parameter types.

Relevant overloads used or referenced:

- `std::string(const char* s)`
  Constructs a string from a C-style string (string literal).

- `std::string(size_t count, char ch)`
  Constructs a string consisting of `count` copies of character `ch`.

The compiler selects the appropriate constructor through **overload resolution** based on the argument types.

Also, constructor overloading allows for **conversion constructors**, which allows implicit conversion:

- `std::string s = "hello";` Copy-initialization (implicit conversion)
- `std::string t("hello");` Direct-initialization 

These are examples of a conversion constructor being invoked during initialization. They work because "hello" is of type const char*, and the constructor std::string(const char*) enables conversion from const char* to std::string.

If a constructor is marked explicit, it can no longer be used for implicit conversion.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(n²)