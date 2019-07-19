#include <iostream>

int main(int argc, char** args) {
	int n;
	
	while (scanf("%d", &n) != EOF) {
		if (n >= 1000) {
			printf("4\r\n");
		} else if (n >= 100) {
			printf("3\r\n");
		} else if (n >= 10) {
			printf("2\r\n");
		} else {
			printf("1\r\n");
		}
		
		if (n >= 1000) {
			printf("%d\r\n", n / 1000);
		}
		
		if (n >= 100) {
			printf("%d\r\n", n % 1000 / 100);
		}
		
		if (n >= 10) {
			printf("%d\r\n", n % 100 / 10);
			n = n % 10;
		}
		
		printf("%d\r\n", n % 10);
	}
	
	return 0;
}
