# 27. Remove Element

- **Platform:** LeetCode
- **Problem:** [27. Remove Element](https://leetcode.com/problems/remove-element/)
- **Difficulty:** Easy
- **Topics:** Arrays, Two Pointers
- **Language:** C++
- **Submission:** Accepted

## Problem Description

Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in-place.

The relative order of the remaining elements may be changed. Then return the number of elements in `nums` that are not equal to `val`.

To receive full credit, the first `k` elements of `nums` must contain the elements that are not equal to `val`.

## Approach: Two Pointers

The problem can be solved efficiently using the Two Pointers technique.

1. Initialize a pointer `k` to 0.
2. Traverse the array using another pointer.
3. If the current element is not equal to `val`, place it at index `k`.
4. Increment `k` whenever a valid element is found.
5. After traversing the entire array, return `k`.

This approach modifies the original array in-place without requiring additional storage.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

- **Time Complexity:** \(O(n)\) – The array is traversed once.
- **Space Complexity:** \(O(1)\) – The algorithm uses constant extra space.

## Example

**Input:**
```text
nums = [3,2,2,3]
val = 3
```

**Output:**
```text
2
```

**Explanation:**

After removing all occurrences of `3`, the first two elements of the array contain:

```text
[2,2]
```

The function returns `2`, representing the number of remaining elements.

## Key Learnings

- Understanding in-place array modification.
- Applying the Two Pointers technique.
- Removing unwanted elements without additional arrays.
- Efficient array traversal.
- Maintaining constant auxiliary space.

## Concepts Used

- Arrays
- Two Pointers
- In-Place Algorithms
- Array Traversal