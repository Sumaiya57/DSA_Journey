## first approach
Memoization (Top-Down DP)
---
Fixes repeated calculations
---
Time: O(n)
Space: O(n)
---
## 2nd approach
# 🪜 Climbing Stairs - Dynamic Programming (Iterative Solution)

This project solves the classic **Climbing Stairs** problem using an optimized **Dynamic Programming (Fibonacci pattern)** approach.

---

## 📌 Problem Statement

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb:
- 1 step
- 2 steps

👉 Find the total number of distinct ways to reach the top.

---

## 📥 Example

### Example 1: 
Input: n = 2
Output: 2

Explanation:

1.1 + 1
2.2
## 🚀 Optimized Solution (Iterative DP)

We use variables instead of an array to reduce space complexity.

### 🔹 Idea:
- `a` = ways to reach (n-2)
- `b` = ways to reach (n-1)
- `c` = current ways

---

## 🧠 Algorithm

1. If `n <= 2`, return `n`
2. Initialize:
   - `a = 1`
   - `b = 2`
3. Loop from 3 to n:
   - `c = a + b`
   - Update `a = b`, `b = c`
4. Return `b`

## Complexity Analysis
Time: O(n)
Space: O(1)