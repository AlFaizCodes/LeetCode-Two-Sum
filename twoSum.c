#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    
    // Allocate memory for the result array
    int* ans = (int*)malloc(2 * sizeof(int));
    
    // Brute force approach: check all pairs
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // If sum of current pair equals target, return the indices
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    
    // No valid pair found
    return NULL;
}
