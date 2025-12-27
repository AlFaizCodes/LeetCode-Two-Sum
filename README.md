# LeetCode Two Sum Problem - Complete Solution

## 📋 Overview
This repository contains a complete solution to the **Two Sum** problem from LeetCode, along with detailed documentation, explanations, and test cases.

## 🎯 Problem Statement
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

- You may assume that each input would have **exactly one solution**
- You may not use the same element twice
- You can return the answer in any order

### Constraints
- `2 <= nums.length <= 10⁴`
- `-10⁹ <= nums[i] <= 10⁹`
- `-10⁹ <= target <= 10⁹`
- **Only one valid answer exists**

### Difficulty: **Easy** 🟢

## 📁 Repository Structure
```
LeetCode-Two-Sum/
├── twoSum.c                    # C implementation of the solution
├── PROBLEM_DESCRIPTION.md      # Detailed problem statement and approaches
├── INPUT_OUTPUT_EXAMPLES.md    # Test cases with examples
├── README.md                   # This file
└── .github/                    # GitHub configuration
```

## 💻 Solution Code

### Approach: Brute Force (Two Nested Loops)
**File:** `twoSum.c`

The solution uses a straightforward brute force approach:
1. Iterate through each element in the array using an outer loop
2. For each element at index `i`, iterate through all elements after it using an inner loop starting from `i+1`
3. Check if the sum of the current pair equals the target
4. If a match is found, return the indices
5. If no pair found, return NULL

### Complexity Analysis
- **Time Complexity:** O(n²) - Two nested loops iterating through the array
- **Space Complexity:** O(1) - Only using a constant amount of extra space (excluding the output array)

### Performance Metrics
- **Status:** ✅ Accepted
- **Runtime:** 103 ms
- **Runtime Percentile:** Beats 32.38% of submissions
- **Memory Usage:** 8.58 MB
- **Memory Percentile:** Beats 93.07% of submissions
- **Test Cases Passed:** 63/63

## 📊 Examples

### Example 1
**Input:** `nums = [2,7,11,15], target = 9`
**Output:** `[0,1]`
**Explanation:** nums[0] + nums[1] == 9, we return [0, 1]

### Example 2
**Input:** `nums = [3,2,4], target = 6`
**Output:** `[1,2]`
**Explanation:** nums[1] + nums[2] == 6, we return [1, 2]

### Example 3
**Input:** `nums = [3,3], target = 6`
**Output:** `[0,1]`
**Explanation:** nums[0] + nums[1] == 6, we return [0, 1]

## 🚀 Alternative Approaches

### Hash Map Approach (Optimal - O(n))
**Time Complexity:** O(n)
**Space Complexity:** O(n)

Using a hash map/hash table to store value-to-index mappings:
1. Create a hash map to store values and their indices
2. For each number, check if (target - current_number) exists in the hash map
3. If found, return the indices
4. Otherwise, add the current number to the hash map

This approach reduces time complexity to O(n) with a single pass through the array.

## 📌 Key Concepts
- **Arrays and Indexing**
- **Nested Loops**
- **Hash Tables/Hash Maps**
- **Two Pointer Technique**
- **Time and Space Complexity Optimization**

## 🎓 Learning Topics
- Problem Analysis
- Algorithm Design
- Optimization Techniques
- Memory Management in C
- Dynamic Array Allocation

## 📖 Documentation Files
- **[PROBLEM_DESCRIPTION.md](PROBLEM_DESCRIPTION.md)** - Detailed problem explanation and approaches
- **[INPUT_OUTPUT_EXAMPLES.md](INPUT_OUTPUT_EXAMPLES.md)** - Test cases and expected outputs
- **[twoSum.c](twoSum.c)** - Complete C source code with comments

## 🔗 Related LeetCode Problems
- Two Sum II - Input Array Is Sorted
- Two Sum III - Data Structure Design
- 3Sum
- 4Sum
- Two Sum IV - Input is a BST
- Two Sum Less Than K

## 💡 Helpful Tips for LeetCode
1. Always clarify the problem constraints
2. Think of multiple approaches (brute force → optimal)
3. Analyze time and space complexity
4. Test with edge cases
5. Optimize step by step

## 📝 How to Use This Repository
1. Read the problem statement in `PROBLEM_DESCRIPTION.md`
2. Review the test cases in `INPUT_OUTPUT_EXAMPLES.md`
3. Study the C implementation in `twoSum.c`
4. Try implementing it yourself first
5. Compare your solution with the provided approach
6. Experiment with the optimized hash map approach

## 📧 Author
Solution submitted to LeetCode on **December 27, 2025**
