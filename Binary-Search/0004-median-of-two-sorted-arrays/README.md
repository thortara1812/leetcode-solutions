# 4. Median of Two Sorted Arrays

- **Platform:** LeetCode
- **Problem:** [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)
- **Difficulty:** Hard
- **Topics:** Binary Search, Arrays
- **Language:** C
- **Submission:** Accepted

## Problem Description

Given two sorted arrays, `nums1` and `nums2` of sizes `m` and `n` respectively, return the median of the two sorted arrays.

The overall run time complexity should be \(O(\log(m+n))\).

## Approach

The problem can be solved efficiently using Binary Search and partitioning.

The main idea is to divide both sorted arrays into two halves such that:

- The left half contains the same number of elements as the right half, or one extra element.
- Every element in the left half is less than or equal to every element in the right half.

By finding the correct partition, the median can be calculated without completely merging the two arrays.

## Solution

Add your actual accepted C implementation here.

## Complexity Analysis

The optimal binary-search partition approach has:

- **Time Complexity:** \(O(\log(\min(m,n)))\)
- **Space Complexity:** \(O(1)\)

## Key Learnings

- Applying binary search to sorted arrays.
- Understanding partition-based algorithms.
- Finding medians without merging arrays.
- Optimizing time complexity for large inputs.
- Handling odd and even combined array lengths.

## Concepts Used

- Binary Search
- Array Partitioning
- Median Calculation
- Boundary Conditions