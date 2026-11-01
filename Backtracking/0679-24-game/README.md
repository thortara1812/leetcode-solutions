# 679. 24 Game

- **Platform:** LeetCode
- **Problem:** [679. 24 Game](https://leetcode.com/problems/24-game/)
- **Difficulty:** Hard
- **Topics:** Backtracking, Recursion, Mathematics
- **Language:** C
- **Submission:** Accepted

## Problem Description

You are given an integer array `cards` containing four numbers between 1 and 9.

Using the four numbers and the arithmetic operations `+`, `-`, `*`, and `/`, determine whether it is possible to obtain the value 24.

Each number must be used exactly once, and parentheses can be used to change the order of operations.

Return `true` if it is possible to obtain 24; otherwise, return `false`.

## Approach: Backtracking

The problem can be solved using recursive backtracking.

1. Start with the four given numbers.
2. Select any two numbers from the current set.
3. Apply one of the arithmetic operations: addition, subtraction, multiplication or division.
4. Replace the selected two numbers with the result of the operation.
5. Recursively repeat the process until only one number remains.
6. Check whether the final value is approximately equal to 24.

Since floating-point arithmetic can introduce precision errors, a small tolerance should be used when comparing the final result with 24.

## Solution

Add your actual accepted C implementation here.

## Complexity Analysis

- **Time Complexity:** \(O(1)\) for the fixed input size of four numbers, since the number of possible combinations and operations is bounded.
- **Space Complexity:** \(O(1)\) for the fixed recursion depth and temporary storage.

## Key Learnings

- Understanding recursive backtracking.
- Exploring different combinations of arithmetic operations.
- Using recursion to reduce a problem into smaller subproblems.
- Handling floating-point precision.
- Understanding the importance of exploring different operation orders.

## Concepts Used

- Backtracking
- Recursion
- Permutations
- Arithmetic Operations
- Floating-Point Calculations