# CPP-assignments -Two Sum Problem

Overview:

This project solves the Two Sum problem using C++ arrays and loops.
Given an array of integers and a target value, the program finds the indices of two numbers in the array that add up to the target.
Problem Statement

Task:
Given an array of integers nums and an integer target, return the indices of the two numbers that add up to the target.

Constraints:

2 ≤ nums.length ≤ 10⁴

−10⁹ ≤ nums[i] ≤ 10⁹

−10⁹ ≤ target ≤ 10⁹

Only one valid solution exists.

Example Test Cases:

Example 1:

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation: nums[0] + nums[1] = 2 + 7 = 9

Example 2:

Input: nums = [3,2,4], target = 6

Output: [1,2]

Explanation: nums[1] + nums[2] = 2 + 4 = 6

Example 3:

Input: nums = [3,3], target = 6

Output: [0,1]

Solution Approach:

Used a simple brute-force approach to check all possible pairs.

Time Complexity → O(n²) (works fine for small inputs).

Space Complexity → O(1).

Code:
https://github.com/Rayineni-ranjithkumar/CPP-assignments/blob/main/two_sum.cpp
