#import <stdio.h>
#import <stdlib.h>

int arrayPairSum(int* nums, int numsSize) {
	int compare_int( const void* a, const void* b ) {
        return *(int*)a>*(int*)b;
    }
    
    qsort(nums, numsSize, sizeof(int), compare_int );
    
    int result = 0;
    for (int i = 0; i < numsSize; i += 2) {
        result += nums[i];
    }
    
    return result;
}