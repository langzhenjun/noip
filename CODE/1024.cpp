#include <iostream>

int main(int argc, char** args) {
	int n, count;
	
	while (scanf("%d", &n) != EOF) {
		if (n == 1) count = 1;
		else count = 2;
		int t = n;
		for (int i=2; i<=t; i++) {
			while (t % i == 0) {
				count++;
				t = t / i; 
				
			}
			
			if (i == n) {
				count--; 
			}
		}
		
		printf("%d\r\n", count);
	}
	
	return 0;
}
