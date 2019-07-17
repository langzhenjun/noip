#include <iostream>

int main(int argc, char** argv) {
	int n;
	while(scanf("%d", &n) != EOF) {
		n = (n * 1000 + n) / 7 / 11 / 13;
		printf("%d\r\n", n);
	}
	
	return 0;
} 
