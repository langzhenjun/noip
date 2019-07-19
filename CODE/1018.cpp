#include <iostream>

int main(int argc, char** args) {
	double fee;
	int time;
	
	while (scanf("%lf", &fee) != EOF) {
		if (fee <= 0.5) {
			printf("%d\r\n", 3);
			continue;
		} 
		
		time = 3;
		fee -= 0.5;
		
		while (fee > 0.01) {
			time += 1;
			fee -= 0.2;
		}
		
		printf("%d\r\n", time);
	}
	
	return 0;
}
