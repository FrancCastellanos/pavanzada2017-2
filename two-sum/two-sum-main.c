#include <stdio.h>
#inclide "two_sum.h"

int main(){

	int nums[] = {2,7,11,15};
	int len = 4;
	int target = 5;
	int *result = getIndexes(nums,len,target);

	if(resutl != NULL && nums[result[0]] + nums[result[1]] == target){
		printf("works");
	} else {
		printf(":(\n");
	}
	return 0;	
}