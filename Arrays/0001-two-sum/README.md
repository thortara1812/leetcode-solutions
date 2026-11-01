# 1. Two Sum

- Platform: LeetCode
- Difficulty: Easy
- Topic: Arrays, Hashing
- Language: Java
- Status: Accepted

## Problem
https://leetcode.com/problems/two-sum/

## Approach
Use a HashMap to store previously visited
numbers and their indices.

For every number, calculate its complement.
If the complement exists in the map,
return both indices.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

## Key Learning
Using HashMap allows efficient lookup
instead of checking every possible pair.