#include <iostream>
#include <cassert>
#include <vector>
#include <string>
#include "solution.h"

void test_most_popular_library() {
    Solution solution;

    std::vector<std::string> actions1 = {
        "visit lib1",
        "add bookA",
        "add bookB",
        "visit lib2",
        "add bookC",
        "visit lib1",
        "add bookA",
        "add bookD"
    };
    assert(solution.most_popular_library(actions1) == "lib1");

    std::vector<std::string> actions2 = {
        "visit libA",
        "add math",
        "add physics",
        "visit libB",
        "add biology",
        "add math"
    };
    std::string result2 = solution.most_popular_library(actions2);
    assert(result2 == "libA" || result2 == "libB");

    std::vector<std::string> actions3 = {
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
    };
    std::string result3 = solution.most_popular_library(actions3);
    assert(result3 == "libX" || result3 == "libY");

    std::vector<std::string> actions4 = {
        "visit lib1",
        "add bookA",
        "visit lib2",
        "add bookB",
        "visit lib3",
        "add bookC"
    };
    std::string result4 = solution.most_popular_library(actions4);
    assert(result4 == "lib1" || result4 == "lib2" || result4 == "lib3");

    std::vector<std::string> actions5 = {
        "visit libA",
        "add book1",
        "add book2",
        "visit libB",
        "add book3",
        "visit libA",
        "add book4"
    };
    assert(solution.most_popular_library(actions5) == "libA");

    std::vector<std::string> actions6 = {
        "visit libA",
        "add book1",
        "add book1",
        "add book1",
        "add book1",
        "visit libB",
        "add book2",
        "add book3",
        "visit libC",
        "add book4",
        "add book4",
        "add book4",
        "add book4",
        "add book4",
        "add book4",
        "add book4",
        "visit libA",
        "add book1",
        "add book1",
        "add book1",
        "add book1"
    };
    assert(solution.most_popular_library(actions6) == "libB");
}

int main() {
    test_most_popular_library();
    std::cout << "All tests passed. You good Mastah!" << std::endl;
    return 0;
}
