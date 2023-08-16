#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize){
    int *result = malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < (numsSize - 1); i++) {
        for (int j = i + 1; j < (numsSize); j++) {
            if ((nums[i] + nums[j]) == target){
                result[0]= i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int main(){
    int nums1[] = {2,7,11,15};
    int target1 = 9;
    int returnSize1;
    int *result1 = twoSum(nums1, 4, target1, &returnSize1);
    printf("[%d,%d]\n", result1[0], result1[1]); // should print [0,1]
    free(result1);

    int nums2[] = {3,2,4};
    int target2 = 6;
    int returnSize2;
    int *result2 = twoSum(nums2, 3, target2, &returnSize2);
    printf("[%d,%d]\n", result2[0], result2[1]); // should print [1,2]
    free(result2);

    int nums3[] = {3,3};
    int target3 = 6;
    int returnSize3;
    int *result3 = twoSum(nums3, 2, target3, &returnSize3);

    printf("[%d,%d]\n", result3[0], result3[1]); // should print [0,1]
    free(result3);

    int nums4[] = {2, 7, 11, 15};
    int target4 = 8;
    int returnSize4;
    int *result4 = twoSum(nums4, 4, target4, &returnSize4);
    if ((result4[0] == 0) && (result4[1] == 0)){
        printf("Could not find target sum in array given\n");
    }else{
        printf("[%d,%d]\n", result4[0], result4[1]); // should print [0, 0]
    }
    free(result4);

    return EXIT_SUCCESS;
}