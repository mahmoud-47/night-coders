import solution as code

def test_alternate_sum():
    solution = code.Solution()

    num1 = 1234
    assert solution.alternate_sum(num1) == -2

    num2 = 98765
    assert solution.alternate_sum(num2) == 7

    num3 = 7
    assert solution.alternate_sum(num3) == 7

    num4 = 42
    assert solution.alternate_sum(num4) == 2

    num5 = 1111
    assert solution.alternate_sum(num5) == 0

    num6 = 135791357913579
    result6 = solution.alternate_sum(num6)
    assert isinstance(result6, int)

    num7 = 2468
    assert solution.alternate_sum(num7) == -4

    num8 = 10203
    assert solution.alternate_sum(num8) == 6

    num9 = 909090
    assert solution.alternate_sum(num9) == 27

    num10 = 987654321098765432
    result10 = solution.alternate_sum(num10)
    assert isinstance(result10, int)

if __name__ == "__main__":
    test_alternate_sum()
    print("All alternate_sum tests passed. You good Mastah!")
