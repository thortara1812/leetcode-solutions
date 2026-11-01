# 275. H-Index II

- **Platform:** LeetCode
- **Problem:** [275. H-Index II](https://leetcode.com/problems/h-index-ii/)
- **Difficulty:** Medium
- **Topics:** Binary Search, Arrays
- **Language:** C++
- **Submission:** Accepted

## Problem Description

Given an array of citations where `citations[i]` represents the number of citations received by the `i-th` paper, the array is sorted in ascending order.

Return the researcher's H-index.

The H-index is defined as the maximum value `h` such that the researcher has published at least `h` papers, each having at least `h` citations.

The algorithm must run in logarithmic time.

## Approach: Binary Search

Since the citations array is sorted, binary search can efficiently determine the H-index.

1. Initialize two pointers, `left = 0` and `right = n - 1`.
2. Calculate the middle index.
3. Determine the number of papers with at least `citations[mid]` citations using `n - mid`.
4. If `citations[mid] >= n - mid`, the current position is a possible H-index. Search the left half for a potentially larger result.
5. Otherwise, search the right half.
6. Return the maximum valid H-index.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

- **Time Complexity:** \(O(\log n)\) – Binary search reduces the search space by half in every iteration.
- **Space Complexity:** \(O(1)\) – Only a constant amount of extra memory is used.

## Example

**Input:**
```text
citations = [0,1,3,5,6]
```

**Output:**
```text
3
```

**Explanation:**

There are 3 papers with at least 3 citations each.

Therefore, the H-index is 3.

## Key Learnings

- Understanding the H-index concept.
- Applying binary search to sorted arrays.
- Identifying conditions for a valid H-index.
- Optimizing search operations.
- Understanding how array positions can determine element counts.

## Concepts Used

- Binary Search
- Sorted Arrays
- H-index
- Search Space Optimization