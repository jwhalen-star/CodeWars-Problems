# Sort the Odd

**Source:** https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/train/cpp

**Difficulty:** 6 kyu

**Language:** C++

## Problem 

You will be given a vector of integers. Your task is to sort the odd numbers in ascending order while leaving the even numbers in their original positions.

## Solution Summary

I've been given a class called `Kata` with a public member function called `sortArray` that returns a `vector<int>` and accepts a parameter that is also of type `vector<int>`.

The vector is passed by value into the function. This means that a copy of the vector passed into the function is made, and that copy is what the function modifies. The original vector is not altered.

My initial solution creates an odd-only selection sort. The program loops through the vector, and when it finds an odd number, it searches the rest of the vector for the smallest remaining odd number and swaps it into the current position. This keeps the even numbers in their original positions while sorting only the odd numbers.

Interestingly, when trying to determine if an integer is odd, using `array[i] % 2 == 1` is not always sufficient in C++, because negative odd numbers produce a remainder of `-1`. A more reliable check is `array[i] % 2 != 0`, or explicitly checking both cases with `array[i] % 2 == 1 || array[i] % 2 == -1`.

This approach has some drawbacks, notably that it implements manual sorting logic, which leads to higher time complexity (O(n²)) compared to more efficient standard library algorithms, increases code complexity, and introduces a greater risk of subtle bugs due to the need for additional conditional checks and careful index management.

I also explored another approach, which is extracting the odd numbers, sorting them, and then reinserting them where they belong. When the odd numbers are extracted, they are not actually removed from the original vector. Instead, they are copied into a separate vector. The program can then sort the separate odd-number vector, loop through the original vector, and whenever it encounters an odd number, replace it with the next sorted odd number.

## Standard Library Usage

- `std::vector<int>`  
  A dynamic array container used to store both the original input and the extracted odd numbers. It provides contiguous storage and supports indexed access and dynamic resizing.

- `std::vector::push_back()`  
  Appends an element to the end of the vector. In this solution, it is used to collect odd numbers into a separate vector during the extraction phase.

- `std::sort(begin, end)`  
  A standard library algorithm defined in `<algorithm>` that sorts a range of elements in ascending order. It runs in O(n log n) time. In this solution, it is used to sort the extracted odd numbers before reinserting them.

- `std::vector::begin()` / `std::vector::end()`  
  Return iterators to the beginning and one-past-the-end of the vector. These define the range of elements that `std::sort` operates on.

- `std::vector::size()`  
  Returns the number of elements in the vector. It is used to control loop iteration when traversing the original vector. Functions the same conceptually as `std::string::size()` and `std::string::length()` (which functionally are exactly the same), only for a different container, vectors. 

## Complexity

### Odd-Only Selection Sort (Loop-Based Solution)
- Time Complexity: O(n²)  
- Space Complexity: O(1)  

### Extract → Sort → Reinsert Solution
- Time Complexity: O(n log n)  
- Space Complexity: O(n)  