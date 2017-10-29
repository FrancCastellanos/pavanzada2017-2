#include <stdlib.h>
#include <stdio.h>
#include "miniproy2.h"

bool judgeCircle(char* moves) {
	int ret[2]={0};
	while(*moves++){
		switch(*(moves-1)){
			case 'U':ret[0]+=1;
			break;
			case 'D':ret[0]-=1;
			break;
			case 'L':ret[1]+=1;
			break;
			case 'R':ret[1]-=1;
			break;
		}
	}
	return ret[0]==0&&ret[1]==0;
}
