#include <stdio.h>

int * getIndexes(int * nums, int target){
	int i,j;
	int candidate;
	int complement;
	int result[2];

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

int main(){

	int nums[] = {2,7,11,15};
	int len = 4;
	int target = 9;
	int *result = getIndexes(nums,len,target);

	if(resutl != NULL && nums[result[0]] + nums[result[1]] == target){
		printf("works");
	} else {
		printf(":(\n");
	}
	return 0;	
}