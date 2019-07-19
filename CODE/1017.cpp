#include <iostream>

int main(int argc, char** args) {
	int n;
	float prices[4] = {3.00, 2.50, 4.10, 10.20};
	
	printf("[1] apples\r\n");
	printf("[2] pears\r\n");
	printf("[3] oranges\r\n");
	printf("[4] grapes\r\n");
	printf("[0] Exit\r\n");
	
	while (scanf("%d", &n) != EOF) {
		switch(n) {
			case 1: 
			case 2:
			case 3:
			case 4:
				printf("price=%.1f\r\n", prices[n-1]);
				break;
			case 0: 
				return 0;
			default: 
				printf("price=0\r\n");
		}
	}
	
	return 0;
}
