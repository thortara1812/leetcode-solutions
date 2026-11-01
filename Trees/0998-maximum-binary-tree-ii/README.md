# 998. Maximum Binary Tree II

- **Platform:** LeetCode
- **Problem:** [998. Maximum Binary Tree II](https://leetcode.com/problems/maximum-binary-tree-ii/)
- **Difficulty:** Medium
- **Topics:** Binary Tree, Recursion, Tree Traversal
- **Language:** C++
- **Submission:** Accepted

## Problem Description

A maximum binary tree is constructed recursively from an array.

- The root is the maximum element in the array.
- The left subtree is the maximum binary tree constructed from the subarray to the left of the maximum element.
- The right subtree is the maximum binary tree constructed from the subarray to the right of the maximum element.

You are given the root of a maximum binary tree constructed from an array `nums` and an integer `val` that was appended to the original array.

Return the root of the maximum binary tree after inserting `val` into the original array.

## Approach: Recursive Tree Insertion

The problem can be solved using recursion by taking advantage of the maximum binary tree properties.

1. If the current root is `NULL`, create and return a new tree node containing `val`.
2. If `val` is greater than the current root's value:
   - Create a new node containing `val`.
   - Set the current tree as its left subtree.
   - Return the new node as the updated root.
3. Otherwise, recursively insert `val` into the right subtree.
4. Return the updated root.

This approach preserves the maximum binary tree structure without rebuilding the entire tree.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

Let `h` represent the height of the binary tree.

- **Time Complexity:** \(O(h)\) – Only the rightmost path may need to be traversed.
- **Space Complexity:** \(O(h)\) – Recursive calls require stack space proportional to the tree height.

In the worst case, both can be \(O(n)\) for a skewed tree.

## Example

**Input:**
```text
root = [4,1,3,null,null,2]
val = 5
```

**Output:**
```text
[5,4,null,1,3,null,2]
```

**Explanation:**

Since 5 is greater than the current root value 4, a new root node containing 5 is created, and the previous tree becomes its left subtree.

## Key Learnings

- Understanding maximum binary tree properties.
- Applying recursive tree insertion.
- Updating tree structures without rebuilding them.
- Understanding right-subtree traversal.
- Managing binary tree pointers.

## Concepts Used

- Binary Trees
- Recursion
- Tree Insertion
- Tree Traversal
- Pointer Manipulation