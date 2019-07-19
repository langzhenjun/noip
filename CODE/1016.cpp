#include <iostream>

int normal_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char** args) {
	int year, month;
	int* days;
	
	while(scanf("%d%d", &year, &month) != EOF) {
		if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
			days = leap_days;
		} else {
			days = normal_days;
		}
		
		printf("%d\r\n", days[month]);
	}
	
	return 0;
}
