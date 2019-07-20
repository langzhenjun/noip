#include <iostream>

int main(int argc, char** args) {
	int n, age, sum;
	
	while (scanf("%d", &n) != EOF) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &age); 
			sum += age;
		}
		
		printf("%.2f\r\n", 1.0 * sum / n);
	}
		
	return 0;
}
