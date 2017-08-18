#include <stdio.h>
#include <stdlib.h>

int * getIndexes(int * nums, int target){
	int i,j;
	int candidate;
	int complement;
	int *result[2] = (int *)calloc(2, sizeof(int));

	for(i=0; i<len-1; i++){
		if(nums[i] >= target){
			continue;
		}
		candidate = nums[i];
		complement = target - candidate;
	
		for(j=i+1; j<len; j++){
			if(nums[j] == complement){
				break;
			}
		}
		if(nums[i] + nums[j] == target){
			result[0] = i;
			result[1] = j;
			return  result;
		}
	}

	return NULL;
}