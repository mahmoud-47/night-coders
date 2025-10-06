/**
 * ** Problem Description **

You are given an array of integers `sizes` and an integer `threshold`.

You need to find the **maximum length of a contiguous subarray** such that:

    (sum of elements in that subarray) - (sum of all elements before the subarray) <= threshold

In other words, for every valid subarray `sizes[i:j]`, 
check if `sum(sizes[i:j]) - sum(sizes[0:i]) <= threshold`. 
Among all valid subarrays, return the **maximum length**.

---

Example 1

Input :
sizes = [2, 1, 3, 2, 4]
threshold = 5

Output: 3

Explanation:
    - subarray [2, 1, 3] → sum = 6, previous sum = 0 → 6 - 0 = 6 > 5 (Nooope)
    - subarray [1, 3, 2] → sum = 6, previous sum = 2 → 6 - 2 = 4 <= 5 (OK) length = 3
    - subarray [3, 2, 4] → sum = 9, previous sum = 3 → 9 - 3 = 6 > 5 (Nooope)
    The longest valid subarray has length 3.

---

Example 2

Input :
sizes = [5, 1, 2, 1, 1, 3]
threshold = 4

Output: 4

Explanation:
    - subarray [1, 2, 1, 1] → sum = 5, previous sum = 5 → 5 - 5 = 0 <= 4 (OK) length = 4
    - no longer subarray satisfies the condition.
---

Constraints:
    - 1 <= len(sizes) <= 10^5
    - 1 <= sizes[i] <= 10^4
    - 0 <= threshold <= 10^9

Return an integer representing the maximum valid subarray length.
 */

#include <vector>
#include "solution.h"

int Solution::max_valid_subarray(const std::vector<int>& sizes, int threshold) {
    // your code here
}
