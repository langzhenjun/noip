#include <iostream>

int main(int argc, char** args) {
	int n, a, b, c;
	while (scanf("%d", &n) != EOF) {
		a = n / 100;
		b = n % 100 / 10;
		c = n % 10;
		if (n == a*a*a + b*b*b + c*c*c) {
			printf("YES\r\n");
		} else {
			printf("NO\r\n");
		}
	} 
	
	return 0;
}
