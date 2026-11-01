# 11. Container With Most Water

- **Platform:** LeetCode
- **Problem:** [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
- **Difficulty:** Medium
- **Topics:** Two Pointers, Greedy, Arrays
- **Language:** C++
- **Submission:** Accepted

## Problem Description

You are given an integer array `height` of length `n`.

There are `n` vertical lines drawn such that the two endpoints of the `i-th` line are `(i, 0)` and `(i, height[i])`.

Find two lines that, together with the x-axis, form a container that holds the maximum amount of water.

Return the maximum amount of water the container can store.

## Approach: Two Pointers

The problem can be solved efficiently using the Two Pointers technique.

1. Initialize two pointers:
   - `left` at the beginning of the array.
   - `right` at the end of the array.
2. Calculate the area formed between the two pointers.
3. The area is determined by the shorter line multiplied by the distance between the pointers.

\[
Area = \min(height[left], height[right]) \times (right-left)
\]

4. Update the maximum area whenever a larger value is found.
5. Move the pointer pointing to the shorter line inward.
6. Repeat until both pointers meet.

Moving the shorter line is optimal because moving the taller line cannot increase the limiting height while reducing the width.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

- **Time Complexity:** \(O(n)\) – Each pointer moves through the array at most once.
- **Space Complexity:** \(O(1)\) – Only a constant amount of extra memory is used.

## Example

**Input:**
```text
height = [1,8,6,2,5,4,8,3,7]
```

**Output:**
```text
49
```

**Explanation:**

The lines at indices 1 and 8 have heights 8 and 7.

The width between them is 7.

\[
Area = \min(8,7) \times 7 = 49
\]

Therefore, the maximum water capacity is 49.

## Key Learnings

- Understanding the Two Pointers technique.
- Optimizing brute-force approaches.
- Applying greedy decisions to reduce the search space.
- Understanding area calculation using array elements.
- Achieving linear time complexity.

## Concepts Used

- Arrays
- Two Pointers
- Greedy Algorithm
- Optimization