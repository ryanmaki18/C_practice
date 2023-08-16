/* THIS QUESTION WAS ON MIDTERM */

#include <stdio.h>
#include <stdlib.h>

float* arr_dup(float *nums, int num_count) {
    float* result = malloc(num_count * sizeof(float));
    for (int i =0; i < num_count; i++){
        result[i] = nums[i];
    }
    return result;
}

int main(){
    float nums[] = { 6.0, 9.6, 10.5, -12.7 };
    int num_count = (sizeof(nums) / sizeof(float));
    printf("num_count = %d\n", num_count);
    float *dup_array = arr_dup(nums, num_count);
    //printf("nums = %f\n. dup_array = %f\n", nums, dup_array);
    printf("nums = ");
    for (int i = 0; i < num_count; i++){
        printf("%f ", nums[i]);
    }
    printf("\ndup_array = ");
    for (int i = 0; i < num_count; i++){
        printf("%f ", dup_array[i]);
    }
    printf("\n");
    //free(dup_array);
}

