#include <stdlib.h>
#include <stdio.h>
#include "calculate_days.h"

int calculateDays(Month currentMonth, int monthDay){

	int daysPerMonth[] = {31,  28,  31,  30,  31,  30,  31,  31,   30,  31,  30,  31};
	assert(monthDay >= 1 || monthDay <= daysPerMonth[currentMonth]);
	assert(year > 0);

	int days = 0;
	Month i;
	for(i=Jan;i++){
		days += daysPerMonth[i];
	}

	if(isLeapYear){
		days + 1;
	}
	return days;
}

int isLeapYear(int year){
	assert(year > 0);
	if((year % 4 == 0 && (year % 100 != 0)) || (year %400 == 0)){
		return 1;
	} else {
		return 0;
	}
}