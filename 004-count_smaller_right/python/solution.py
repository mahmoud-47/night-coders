"""
** Problem Description **

Write a function that takes an array of numbers and returns a new array where
each element represents how many numbers to the right of the current position
are smaller than the current number.

Function Requirements:
- Input: An array of integers
- Output: An array of integers of the same length
- For each element at index i, count how many elements at indices i+1, i+2, ..., end
  are smaller than arr[i]

---
Example 1

Input: [5, 4, 3, 2, 1]
Output: [4, 3, 2, 1, 0]

Explanation:
- 5 has 4 smaller numbers to its right: [4, 3, 2, 1]
- 4 has 3 smaller numbers to its right: [3, 2, 1]
- 3 has 2 smaller numbers to its right: [2, 1]
- 2 has 1 smaller number to its right: [1]
- 1 has 0 smaller numbers to its right: []

---
Example 2

Input: [1, 2, 0]
Output: [1, 1, 0]

Explanation:
- 1 has 1 smaller number to its right: [0]
- 2 has 1 smaller number to its right: [0]
- 0 has 0 smaller numbers to its right: []
"""

class Solution:
    def count_smaller_right(self, arr):
        pass
