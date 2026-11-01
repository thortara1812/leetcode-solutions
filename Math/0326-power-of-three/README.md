# 326. Power of Three

- **Platform:** LeetCode
- **Problem:** [326. Power of Three](https://leetcode.com/problems/power-of-three/)
- **Difficulty:** Easy
- **Topic:** Mathematics
- **Language:** C
- **Submission:** Accepted

## Problem Description

Given an integer `n`, determine whether it is a power of three.

An integer `n` is a power of three if there exists an integer `x` such that:

\[
n = 3^x
\]

Return `true` if `n` is a power of three; otherwise, return `false`.

## Approach: Iterative Division

The solution uses repeated division by 3.

1. Check whether `n` is less than 1. If so, return `false`, because powers of three are positive.
2. While `n` is divisible by 3, divide it by 3.
3. After removing all factors of 3, check whether the remaining value equals 1.
4. If it equals 1, the original number is a power of three.

## Solution

```c
bool isPowerOfThree(int n) {
    if (n < 1) {
        return false;
    }

    while (n % 3 == 0) {
        n /= 3;
    }

    return n == 1;
}
```

## Complexity Analysis

- **Time Complexity:** \(O(\log_3 n)\) — Each iteration divides `n` by 3.
- **Space Complexity:** \(O(1)\) — Only a constant amount of extra memory is used.

## Example

**Input:** `n = 27`

Execution:

```text
27 → 9 → 3 → 1
```

Since the final value is 1, the function returns `true`.

**Input:** `n = 45`

Execution:

```text
45 → 15 → 5
```

Since 5 is not equal to 1, the function returns `false`.

## Key Learnings

- Understanding powers of three.
- Using modulo to check divisibility.
- Applying iterative division to eliminate prime factors.
- Handling non-positive integer inputs.