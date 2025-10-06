#include <iostream>
#include <cassert>
#include <vector>
#include "solution.h"

void test_max_valid_subarray() {
    Solution solution;

    // Test 1: basic example
    std::vector<int> sizes1 = {2, 1, 3, 2, 4};
    assert(solution.max_valid_subarray(sizes1, 5) == 3);

    // Test 2: multiple valid subarrays
    std::vector<int> sizes2 = {5, 1, 2, 1, 1, 3};
    assert(solution.max_valid_subarray(sizes2, 5) == 5);

    // Test 3: all small elements, large threshold
    std::vector<int> sizes3 = {1, 1, 1, 1, 1};
    assert(solution.max_valid_subarray(sizes3, 100) == 5);

    // Test 4: threshold = 0
    std::vector<int> sizes4 = {3, 2, 1, 4};
    assert(solution.max_valid_subarray(sizes4, 0) == 2);

    // Test 5: decreasing sequence
    std::vector<int> sizes5 = {10, 8, 6, 4, 2};
    assert(solution.max_valid_subarray(sizes5, 10) == 4);

    // Test 6: single element valid
    std::vector<int> sizes6 = {5};
    assert(solution.max_valid_subarray(sizes6, 10) == 1);

    // Test 7: single element invalid
    std::vector<int> sizes7 = {20};
    assert(solution.max_valid_subarray(sizes7, 5) == 0);

    // Test 8: all elements same
    std::vector<int> sizes8 = {2, 2, 2, 2};
    assert(solution.max_valid_subarray(sizes8, 6) == 3);

    // Test 9: alternating large and small
    std::vector<int> sizes9 = {10, 1, 10, 1, 10, 1};
    int result9 = solution.max_valid_subarray(sizes9, 5);
    assert(result9 >= 0);
}

int main() {
    test_max_valid_subarray();
    std::cout << "All max_valid_subarray tests passed. You good Mastah!" << std::endl;
    return 0;
}
