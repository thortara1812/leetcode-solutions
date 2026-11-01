# 45. Jump Game II

- **Platform:** LeetCode
- **Problem:** [45. Jump Game II](https://leetcode.com/problems/jump-game-ii/)
- **Difficulty:** Medium
- **Topics:** Greedy, Arrays, Dynamic Programming
- **Language:** C++
- **Submission:** Accepted

## Problem Description

You are given a 0-indexed integer array `nums` of length `n`.

You are initially positioned at the first index of the array. Each element represents the maximum jump length from that position.

Your goal is to reach the last index using the minimum number of jumps.

Return the minimum number of jumps required to reach the last index.

## Approach: Greedy Algorithm

The problem can be solved efficiently using a greedy approach.

1. Maintain the farthest index that can be reached from the current range.
2. Track the current jump boundary.
3. Iterate through the array and update the farthest reachable position.
4. Whenever the current index reaches the current jump boundary, increment the jump count.
5. Update the boundary to the farthest reachable index.
6. Continue until the last index is reached.

This approach makes locally optimal decisions to achieve the minimum number of jumps.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

- **Time Complexity:** \(O(n)\) – The array is traversed once.
- **Space Complexity:** \(O(1)\) – Only a constant amount of extra space is used.

## Example

**Input:**
```text
nums = [2,3,1,1,4]
```

**Output:**
```text
2
```

**Explanation:**

- Jump from index 0 to index 1.
- Jump from index 1 to index 4.
- A total of 2 jumps are required.

## Key Learnings

- Understanding greedy algorithms.
- Tracking the farthest reachable position.
- Optimizing array traversal.
- Solving minimum-jump problems efficiently.
- Improving time complexity from potentially quadratic approaches to linear time.

## Concepts Used

- Greedy Algorithm
- Arrays
- Range Tracking
- Optimization