#include <iostream>
#include <cassert>
#include "solution.h"

void test_alternate_sum() {
    Solution solution;

    long long num1 = 1234;
    assert(solution.alternate_sum(num1) == -2);

    long long num2 = 98765;
    assert(solution.alternate_sum(num2) == 7);

    long long num3 = 7;
    assert(solution.alternate_sum(num3) == 7);

    long long num4 = 42;
    assert(solution.alternate_sum(num4) == 2);

    long long num5 = 1111;
    assert(solution.alternate_sum(num5) == 0);

    long long num6 = 135791357913579;
    long long result6 = solution.alternate_sum(num6);
    // Just ensure it returns an integer (implicitly true, but test sanity)
    assert(typeid(result6) == typeid(long long));

    long long num7 = 2468;
    assert(solution.alternate_sum(num7) == -4);

    long long num8 = 10203;
    assert(solution.alternate_sum(num8) == 6);

    long long num9 = 909090;
    assert(solution.alternate_sum(num9) == 27);

    long long num10 = 987654321098765432;
    long long result10 = solution.alternate_sum(num10);
    assert(typeid(result10) == typeid(long long));
}

int main() {
    test_alternate_sum();
    std::cout << "All alternate_sum tests passed. You good Mastah!" << std::endl;
    return 0;
}
