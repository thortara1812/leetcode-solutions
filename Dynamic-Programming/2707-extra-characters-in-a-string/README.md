# 2707. Extra Characters in a String

- **Platform:** LeetCode
- **Problem:** [2707. Extra Characters in a String](https://leetcode.com/problems/extra-characters-in-a-string/)
- **Difficulty:** Medium
- **Topics:** Dynamic Programming, Strings, Hashing, Trie
- **Language:** C++
- **Submission:** Accepted

## Problem Description

You are given a 0-indexed string `s` and a dictionary of words `dictionary`.

You need to split `s` into one or more non-overlapping substrings such that each substring is either present in the dictionary or is considered an extra character.

Return the minimum number of extra characters left over after splitting the string optimally.

## Approach: Dynamic Programming

The problem can be solved using one-dimensional Dynamic Programming.

Let `dp[i]` represent the minimum number of extra characters in the first `i` characters of the string.

1. Initialize the DP array with the maximum possible extra character count.
2. For each position, consider treating the current character as an extra character.
3. Check all possible substrings ending at the current position.
4. If a substring exists in the dictionary, update the DP value using the previous position.
5. Continue until the entire string is processed.
6. Return `dp[n]`, which represents the minimum number of extra characters.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

For the standard DP approach using a hash set for dictionary lookups:

Let:
- `n` be the length of the string.
- `L` be the maximum dictionary word length.

- **Time Complexity:** Approximately \(O(n \times L^2)\) when substring creation and hashing are included.
- **Space Complexity:** \(O(n + D)\), where `D` represents the storage required for the dictionary.

## Example

**Input:**
```text
s = "leetscode"
dictionary = ["leet","code","leetcode"]
```

**Output:**
```text
1
```

**Explanation:**

The string can be split into:

- `"leet"` – Present in the dictionary.
- `"s"` – Extra character.
- `"code"` – Present in the dictionary.

Only one extra character remains.

## Key Learnings

- Understanding one-dimensional Dynamic Programming.
- Solving string segmentation problems.
- Using dictionaries for efficient word lookup.
- Finding optimal solutions through substring matching.
- Applying DP state transitions.

## Concepts Used

- Dynamic Programming
- String Manipulation
- Hashing
- Substring Matching
- Optimization