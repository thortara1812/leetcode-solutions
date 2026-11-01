# 14. Longest Common Prefix

- **Platform:** LeetCode
- **Problem:** [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)
- **Difficulty:** Easy
- **Topics:** Strings, Trie
- **Language:** C++
- **Submission:** Accepted

## Problem Description

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

A prefix is a sequence of characters that appears at the beginning of a string.

## Approach: Vertical Scanning

The problem can be solved by comparing characters at the same positions across all strings.

1. Check whether the input array is empty.
2. Take the first string as the reference.
3. Iterate through each character of the reference string.
4. Compare the current character with the corresponding character in every other string.
5. If a mismatch is found or a string ends, stop the comparison.
6. Return the common prefix obtained so far.

This approach avoids unnecessary comparisons after the first mismatch.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

Let:
- `n` be the number of strings.
- `m` be the length of the shortest string.

- **Time Complexity:** \(O(n \times m)\) – Each character position is compared across the input strings in the worst case.
- **Space Complexity:** \(O(1)\) auxiliary space, excluding the returned prefix string.

## Example

**Input:**
```text
strs = ["flower","flow","flight"]
```

**Output:**
```text
"fl"
```

**Explanation:**

- `flower` starts with `fl`.
- `flow` starts with `fl`.
- `flight` starts with `fl`.

The longest common prefix is `"fl"`.

## Key Learnings

- Understanding string comparison.
- Finding common prefixes across multiple strings.
- Applying vertical scanning.
- Handling empty strings and mismatched characters.
- Optimizing string traversal.

## Concepts Used

- String Manipulation
- Array Traversal
- Character Comparison
- Prefix Matching