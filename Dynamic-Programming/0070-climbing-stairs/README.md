# 70. Climbing Stairs

- **Platform:** LeetCode
- **Problem:** [70. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)
- **Difficulty:** Easy
- **Topics:** Dynamic Programming, Math, Recursion
- **Language:** C++
- **Submission:** Accepted

## Problem Description

You are climbing a staircase with `n` steps.

Each time, you can either climb 1 step or 2 steps.

Determine how many distinct ways you can climb to the top of the staircase.

## Approach: Dynamic Programming

The problem can be solved using Dynamic Programming by breaking it into smaller subproblems.

To reach step `n`, you can either:

- Come from step `n - 1` by taking one step.
- Come from step `n - 2` by taking two steps.

Therefore, the recurrence relation is:

\[
dp[n] = dp[n-1] + dp[n-2]
\]

Base cases:

- `dp[1] = 1`
- `dp[2] = 2`

By calculating each result using the previous two values, we can efficiently determine the total number of ways.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

For the space-optimized iterative DP approach:

- **Time Complexity:** \(O(n)\) – Each step is calculated once.
- **Space Complexity:** \(O(1)\) – Only two previous results are maintained.

## Example

**Input:**
```text
n = 3
```

**Output:**
```text
3
```

**Explanation:**

There are three distinct ways to climb the staircase:

1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

## Key Learnings

- Understanding Dynamic Programming.
- Identifying overlapping subproblems.
- Applying recurrence relations.
- Optimizing space using previous results.
- Recognizing the Fibonacci sequence pattern.

## Concepts Used

- Dynamic Programming
- Recursion
- Fibonacci Sequence
- Space Optimization