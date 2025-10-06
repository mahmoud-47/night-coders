import solution as code

def test_most_popular_library():
    solution = code.Solution()

    actions1 = [
        "visit lib1",
        "add bookA",
        "add bookB",
        "visit lib2",
        "add bookC",
        "visit lib1",
        "add bookA",
        "add bookD"
    ]
    assert solution.most_popular_library(actions1) == "lib1"

    actions2 = [
        "visit libA",
        "add math",
        "add physics",
        "visit libB",
        "add biology",
        "add math"
    ]
    assert solution.most_popular_library(actions2) in ["libA", "libB"]

    actions3 = [
        "visit libX",
        "add book1",
        "add book2",
        "add book3",
        "visit libY",
        "add book4",
        "add book5",
        "add book6",
        "visit libZ",
        "add book7"
    ]
    assert solution.most_popular_library(actions3) in ["libX", "libY"]

    actions4 = [
        "visit lib1",
        "add bookA",
        "visit lib2",
        "add bookB",
        "visit lib3",
        "add bookC"
    ]
    assert solution.most_popular_library(actions4) in ["lib1", "lib2", "lib3"]

    actions5 = [
        "visit libA",
        "add book1",
        "add book2",
        "visit libB",
        "add book3",
        "visit libA",
        "add book4"
    ]
    assert solution.most_popular_library(actions5) == "libA"

    actions6 = [
        "visit libA",
        "add book1",
        "add book1",
        "add book1",
        "add book1",
        "visit libB",
        "add book2",
        "add book3",
        "visit libC",
        "add book4"
        "add book4"
        "add book4"
        "add book4"
        "add book4"
        "add book4"
        "add book4"
        "visit libA",
        "add book1",
        "add book1",
        "add book1",
        "add book1",
    ]
    assert solution.most_popular_library(actions6) == "libB"

if __name__ == "__main__":
    test_most_popular_library()
    print("All tests passed. You good Mastah!")
