# Sum of Numbers

**Source:** https://www.codewars.com/kata/55f2b110f61eb01779000053/train/cpp

**Difficulty:** 7 kyu

**Language:** C++

## Problem 

Given two integers a and b, return the sum of all integers within the inclusive range defined by the two values. The inputs may be provided in any order, so the solution must correctly handle both increasing and decreasing ranges. If the values are equal, return that value.

## Solution Summary

Initially, I used conditional logic to differentiate between which calculations to do depending on whether a or b was greater. I used the values of the parameters passed into the function to determine the value of a variable called count, which controlled how many times the loop executed. Within the loop, I accumulated the sum by incrementing or decrementing the current value of either a or b, depending on which was greater, and adding that value to sum until the loop executed the specified number of times. However, this approach introduced additional complexity by requiring multiple conditional branches, manual iteration control, and mutation of the input values. Therefore, to refine the solution, I used std::min() and std::max() from the C++ standard library to determine the lower and upper bounds of the range. I then used the minimum value as the initial value of the loop counter and incremented the counter while adding each value to sum until the counter reached the maximum value. This method eliminates unnecessary conditional branching and preserves the original input values without directly manipulating them. An arithmetic-based approach can also be implemented that preserves my initial count methodology, and multiplies the figure by the average of the values passed into the function (Gauss formula). Direct computation reduces the time complexity from linear time to constant time by eliminating the need for iteration.

## Standard Library Usage

- `std::min(a, b)`  
  Returns the smaller of two values. In this solution, it is used to determine the lower bound of the range without requiring conditional branching.

- `std::max(a, b)`  
  Returns the larger of two values. In this solution, it is used to determine the upper bound of the range, ensuring the loop iterates correctly regardless of input order.

## Complexity

### Loop-Based Solution
- Time Complexity: O(n)
- Space Complexity: O(1)

### Arithmetic (Direct Computation) Solution
- Time Complexity: O(1)
- Space Complexity: O(1)