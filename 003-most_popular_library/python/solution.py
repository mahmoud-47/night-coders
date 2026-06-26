"""
** Problem Description **

You are given a sequence of actions representing visits to libraries and additions of books.
Each library is identified by a string name, e.g. "lib1", "libA", etc.
There are only two types of actions:

    - "visit libX" : sets your current library to libX.
    - "add book_name" : adds a book named book_name to the current library.

If the book already exists in the current library, do not add it again.
Your task is to determine which library ends up with the most books after all actions are performed.
If multiple libraries have the same (maximum) number of books, return any one of them.

--- Example 1

Input : 
actions = [
  "visit lib1",
  "add bookA",
  "add bookB",
  "visit lib2",
  "add bookC",
  "visit lib1",
  "add bookA",
  "add bookD"
]
Output: "lib1"

Explanation:
    - lib1 has books: {bookA, bookB, bookD} → 3 books
    - lib2 has books: {bookC} → 1 book
The library with the most books is "lib1".

--- Example 2

Input :
actions = [
  "visit libA",
  "add math",
  "add physics",
  "visit libB",
  "add biology",
  "add math"
]
Output: "libA"

Explanation:
    - libA → {math, physics} → 2 books
    - libB → {biology, math} → 2 books
Both have 2 books; returning either "libA" or "libB" is acceptable.

Constraints
  -1 <= len(actions) <= 10^4
  - Each action string starts with "visit" or "add".
  - Library and book names contain only alphanumeric characters (no spaces).
  - You will always visit a library before adding a book.
"""

class Solution:
    def most_popular_library(self, actions):
        # your code goes here
        pass
                