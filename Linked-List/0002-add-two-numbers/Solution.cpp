# 2. Add Two Numbers

- **Platform:** LeetCode
- **Problem:** [2. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)
- **Difficulty:** Medium
- **Topics:** Linked List, Mathematics, Recursion
- **Language:** C++
- **Submission:** Accepted

## Problem Description

You are given two non-empty linked lists representing two non-negative integers.

The digits are stored in reverse order, and each node contains a single digit.

Add the two numbers and return the sum as a linked list.

You may assume that the two numbers do not contain any leading zeroes, except the number 0 itself.

## Approach: Linked List Traversal with Carry

The problem can be solved using linked list traversal and elementary addition.

1. Initialize a dummy node to simplify the construction of the result linked list.
2. Maintain a pointer to the current result node.
3. Traverse both input linked lists simultaneously.
4. Add the corresponding digits along with the carry from the previous addition.
5. Calculate the current digit using `sum % 10`.
6. Calculate the new carry using `sum / 10`.
7. Create a new node containing the resulting digit.
8. Continue until both lists are exhausted and no carry remains.
9. Return the result starting from `dummy->next`.

This approach handles numbers of different lengths and any remaining carry at the end.

## Solution

Add your actual accepted C++ implementation here.

## Complexity Analysis

Let `m` and `n` represent the lengths of the two linked lists.

- **Time Complexity:** \(O(\max(m,n))\) – Each node is visited once.
- **Space Complexity:** \(O(\max(m,n))\) – The result linked list requires space proportional to the number of output digits.

## Example

**Input:**
```text
l1 = [2,4,3]
l2 = [5,6,4]
```

**Output:**
```text
[7,0,8]
```

**Explanation:**

The linked lists represent:

- First number: 342
- Second number: 465

Their sum is:

\[
342 + 465 = 807
\]

Since the digits are stored in reverse order, the resulting linked list is `[7,0,8]`.

## Key Learnings

- Understanding linked list traversal.
- Performing digit-by-digit addition.
- Managing carry propagation.
- Using dummy nodes to simplify linked list construction.
- Handling linked lists of different lengths.

## Concepts Used

- Linked Lists
- Mathematics
- Carry Handling
- Dummy Node Technique
- Pointer Manipulation