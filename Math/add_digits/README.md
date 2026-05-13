## problem statement
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
---
# Recursive Formula

sum(n)=n mod 10+sum([n/10])
✅take last digit: n % 10
✅Remove last digit:n / 10

# What I Learn

✅ breaking numbers recursively
✅ smaller input thinking