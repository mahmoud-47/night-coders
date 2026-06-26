#include <iostream>
#include <cassert>
#include <vector>
#include "solution.h"

void test_count_smaller_right() {
    Solution solution;

    std::vector<int> arr1 = {5, 4, 3, 2, 1};
    assert(solution.count_smaller_right(arr1) == (std::vector<int>{4, 3, 2, 1, 0}));

    std::vector<int> arr2 = {1, 2, 0};
    assert(solution.count_smaller_right(arr2) == (std::vector<int>{1, 1, 0}));

    std::vector<int> arr3 = {1, 1, 1, 1};
    assert(solution.count_smaller_right(arr3) == (std::vector<int>{0, 0, 0, 0}));

    std::vector<int> arr4 = {1, 2, 3, 4, 5};
    assert(solution.count_smaller_right(arr4) == (std::vector<int>{0, 0, 0, 0, 0}));

    std::vector<int> arr5 = {3};
    assert(solution.count_smaller_right(arr5) == (std::vector<int>{0}));

    std::vector<int> arr6 = {5, 1, 4, 2, 3};
    assert(solution.count_smaller_right(arr6) == (std::vector<int>{4, 0, 2, 0, 0}));

    std::vector<int> arr7 = {-1, -2, -3};
    assert(solution.count_smaller_right(arr7) == (std::vector<int>{2, 1, 0}));

    std::vector<int> arr8 = {0, 0, 0};
    assert(solution.count_smaller_right(arr8) == (std::vector<int>{0, 0, 0}));
}

int main() {
    test_count_smaller_right();
    std::cout << "All count_smaller_right tests passed. You good Mastah!" << std::endl;
    return 0;
}
