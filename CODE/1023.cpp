#include <iostream>

int main(int argc, char** args) {
	int n, min, max;
	
	while (scanf("%d", &n) != EOF) {
		min = 1000;
		max = 0;
		int item;
		for (int i = 0; i < n; i++) {
			scanf("%d", &item); 
			if (item > max) max = item;
			if (item < min) min = item;
		}
		
		printf("%d\r\n", max - min);
	}
		
	return 0;
}
