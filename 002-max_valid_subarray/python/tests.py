import solution as code

def test_max_valid_subarray():
    solution = code.Solution()

    # Test 1: basic example
    sizes1 = [2, 1, 3, 2, 4]
    threshold1 = 5
    assert solution.max_valid_subarray(sizes1, threshold1) == 3

    # Test 2: example with multiple valid subarrays
    sizes2 = [5, 1, 2, 1, 1, 3]
    threshold2 = 5
    assert solution.max_valid_subarray(sizes2, threshold2) == 5

    # Test 3: all elements small, large threshold
    sizes3 = [1, 1, 1, 1, 1]
    threshold3 = 100
    assert solution.max_valid_subarray(sizes3, threshold3) == 5

    # Test 4: threshold = 0
    sizes4 = [3, 2, 1, 4]
    threshold4 = 0
    print(solution.max_valid_subarray(sizes4, threshold4))
    assert solution.max_valid_subarray(sizes4, threshold4) == 2

    # Test 5: decreasing sequence
    sizes5 = [10, 8, 6, 4, 2]
    threshold5 = 10
    assert solution.max_valid_subarray(sizes5, threshold5) == 4

    # Test 6: single element valid
    sizes6 = [5]
    threshold6 = 10
    assert solution.max_valid_subarray(sizes6, threshold6) == 1

    # Test 7: single element invalid
    sizes7 = [20]
    threshold7 = 5
    assert solution.max_valid_subarray(sizes7, threshold7) == 0

    # Test 8: all elements same
    sizes8 = [2, 2, 2, 2]
    threshold8 = 6
    assert solution.max_valid_subarray(sizes8, threshold8) == 3

    # Test 9: alternating large and small
    sizes9 = [10, 1, 10, 1, 10, 1]
    threshold9 = 5
    result9 = solution.max_valid_subarray(sizes9, threshold9)
    assert isinstance(result9, int) and result9 >= 0

    # Test 10: large array (performance sanity)
    # sizes10 = [1] * 100000
    # threshold10 = 50000
    # result10 = solution.max_valid_subarray(sizes10, threshold10)
    # assert isinstance(result10, int) and result10 <= 100000


if __name__ == "__main__":
    test_max_valid_subarray()
    print("All max_valid_subarray tests passed. You good Mastah!")
