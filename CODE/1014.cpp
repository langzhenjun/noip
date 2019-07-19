#include <iostream>

int main(int argc, char** args) {
	int s;
	
	while(scanf("%d", &s) != EOF) {
		if (s >= 90) {
			printf("Excellent\r\n");
		} else if(s >= 80) {
			printf("Good\r\n");
		} else if(s >= 60) {
			printf("Pass\r\n");
		} else {
			printf("Fail\r\n");
		}
	}
	
	return 0;
} 
