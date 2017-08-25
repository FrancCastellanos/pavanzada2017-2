#ifndef __CALCULATE_DAYS__
#define __CALCULATE_DAYS__ 

typedef enum month { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec} Month;
int daysPerMonth[] = {31,  28,  31,  30,  31,  30,  31,  31,   30,  31,  30,  31};

int calculateDays(month, int, int);
int isLeapYear(int);
#endif