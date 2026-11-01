# 79. Word Search

- **Platform:** LeetCode
- **Problem:** [79. Word Search](https://leetcode.com/problems/word-search/)
- **Difficulty:** Medium
- **Topics:** Backtracking, DFS, Arrays, Matrix
- **Language:** C++

## Problem Description

Given an `m x n` grid of characters `board` and a string `word`, return `true` if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring.

The same cell cannot be used more than once in a single word search path.

## Approach: Backtracking with Depth-First Search

The problem can be solved using DFS combined with backtracking.

1. Iterate through every cell in the board.
2. If the current cell matches the first character of the word, start DFS.
3. Check whether the current position is valid and matches the required character.
4. Mark the current cell as visited.
5. Explore all four directions: up, down, left and right.
6. If the complete word is found, return `true`.
7. Otherwise, restore the current cell and backtrack.

The process continues until the word is found or all possible paths have been explored.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

Let `m` and `n` represent the number of rows and columns in the board, and `L` represent the length of the word.

- **Time Complexity:** \(O(m \times n \times 4 \times 3^{L-1})\) as a general upper bound for DFS exploration.
- **Space Complexity:** \(O(L)\) for the recursion stack, excluding the input board.

## Example

**Input:**
```text
board = [
  ["A","B","C","E"],
  ["S","F","C","S"],
  ["A","D","E","E"]
]

word = "ABCCED"
```

**Output:**
```text
true
```

**Explanation:**

The word can be constructed by following adjacent cells:

`A → B → C → C → E → D`

Each cell is used only once.

## Key Learnings

- Understanding Depth-First Search.
- Applying recursive backtracking.
- Exploring matrix traversal in four directions.
- Handling visited cells.
- Restoring the board state during backtracking.

## Concepts Used

- Backtracking
- Depth-First Search (DFS)
- Matrix Traversal
- Recursion
- Visited Cell Tracking