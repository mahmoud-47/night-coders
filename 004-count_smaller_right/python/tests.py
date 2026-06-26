import solution as code

def test_count_smaller_right():
    solution = code.Solution()

    arr1 = [5, 4, 3, 2, 1]
    assert solution.count_smaller_right(arr1) == [4, 3, 2, 1, 0]

    arr2 = [1, 2, 0]
    assert solution.count_smaller_right(arr2) == [1, 1, 0]

    arr3 = [1, 1, 1, 1]
    assert solution.count_smaller_right(arr3) == [0, 0, 0, 0]

    arr4 = [1, 2, 3, 4, 5]
    assert solution.count_smaller_right(arr4) == [0, 0, 0, 0, 0]

    arr5 = [3]
    assert solution.count_smaller_right(arr5) == [0]

    arr6 = [5, 1, 4, 2, 3]
    assert solution.count_smaller_right(arr6) == [4, 0, 2, 0, 0]

    arr7 = [-1, -2, -3]
    assert solution.count_smaller_right(arr7) == [2, 1, 0]

    arr8 = [0, 0, 0]
    assert solution.count_smaller_right(arr8) == [0, 0, 0]

if __name__ == "__main__":
    test_count_smaller_right()
    print("All count_smaller_right tests passed. You good Mastah!")
