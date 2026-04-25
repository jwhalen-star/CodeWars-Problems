# Split Strings

**Source:** https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp

**Difficulty:** 6 kyu

**Language:** C++

## Problem 

Complete the function so that it splits a given string into pairs of two characters.

If the string contains an odd number of characters, the final pair should be completed with an underscore (`'_'`).

## Solution Summary

The function takes a `const std::string& s`, which is a reference to a `std::string` object. If a string literal (e.g., `"abc"`) is passed, it is first used to construct a temporary `std::string`, which is then bound to `s`.

Because `s` is read-only, I create a modifiable copy as `std::string str = s;`

I then check if the string has an odd length and append '_' using push_back() if needed. Since str is a std::string, it manages a dynamic character buffer internally and may reallocate memory when appending.

Next, I iterate through the string in steps of two and use substr(i, 2) to extract each pair of characters. Each pair is added to a `std::vector<std::string>` using `std::vector::push_back()`, forming the final result.

## Standard Library Usage

- `std::string`  
  A dynamic string class that manages a resizable array of characters. Used to store and manipulate the input string, including appending characters with `push_back()`.

- `std::string::push_back(char ch)`  
  Appends a single character to the end of the string, increasing its size and reallocating memory if necessary.

- `std::string::length()`  
  Returns the number of characters in the string. Used to determine if the string length is odd.

- `std::string::substr(size_t pos, size_t count)`  
  Returns a new `std::string` containing a substring starting at index `pos` with length `count`. Used to extract pairs of characters.

- `std::vector<std::string>`  
  A dynamic array used to store the resulting pairs of characters as separate strings.

- `std::vector::push_back(const T& value)`  
  Appends a new element to the end of the vector, used here to store each two-character substring.

## Complexity

- **Time Complexity: O(n)**  
  The string is processed in linear time.  
  - Copying the input string: O(n)  
  - Optional `push_back` (amortized): O(1)  
  - Loop runs ~n/2 times, and each `substr(i, 2)` is O(1) (fixed size)  
  Overall: O(n)

- **Space Complexity: O(n)**  
  - Copy of the string: O(n)  
  - Result vector stores ~n/2 strings of size 2 → O(n) total  
  Overall: O(n)