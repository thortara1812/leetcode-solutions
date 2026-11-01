# 72. Edit Distance

- **Platform:** LeetCode
- **Problem:** [72. Edit Distance](https://leetcode.com/problems/edit-distance/)
- **Difficulty:** Medium
- **Topics:** Dynamic Programming, Strings
- **Language:** C++
- **Submission:** Accepted

## Problem Description

Given two strings, `word1` and `word2`, return the minimum number of operations required to convert `word1` into `word2`.

You can perform three operations:

1. **Insert:** Insert a character.
2. **Delete:** Delete a character.
3. **Replace:** Replace one character with another.

The objective is to find the minimum number of operations needed to transform the first string into the second.

## Approach: Dynamic Programming

The problem can be solved using a two-dimensional Dynamic Programming table.

Let `dp[i][j]` represent the minimum number of operations required to convert the first `i` characters of `word1` into the first `j` characters of `word2`.

### Recurrence Relation

If the current characters are equal:

\[
dp[i][j] = dp[i-1][j-1]
\]

Otherwise, consider the minimum of three operations:

\[
dp[i][j] = 1 + \min
\begin{cases}
dp[i-1][j] & \text{Delete}\\
dp[i][j-1] & \text{Insert}\\
dp[i-1][j-1] & \text{Replace}
\end{cases}
\]

### Initialization

- `dp[i][0] = i` – Delete all characters from `word1`.
- `dp[0][j] = j` – Insert all characters of `word2`.

The final answer is stored in `dp[m][n]`, where `m` and `n` are the lengths of the two strings.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

For the standard two-dimensional DP implementation:

- **Time Complexity:** \(O(m \times n)\) – Every cell in the DP table is calculated once.
- **Space Complexity:** \(O(m \times n)\) – A two-dimensional DP table is maintained.

Here, `m` and `n` represent the lengths of `word1` and `word2`.

## Example

**Input:**
```text
word1 = "horse"
word2 = "ros"
```

**Output:**
```text
3
```

**Explanation:**

The conversion can be performed using three operations:

1. Replace `h` with `r`: `rorse`.
2. Delete `r`: `rose`.
3. Delete `e`: `ros`.

The minimum number of operations required is 3.

## Key Learnings

- Understanding two-dimensional Dynamic Programming.
- Solving string transformation problems.
- Applying insertion, deletion and replacement operations.
- Building recurrence relations.
- Handling boundary conditions in DP tables.

## Concepts Used

- Dynamic Programming
- String Manipulation
- Edit Distance
- Two-Dimensional DP
- Recurrence Relations