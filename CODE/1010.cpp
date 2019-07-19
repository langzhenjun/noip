#include <iostream>

int main(int argc, char** args) {
	float w, fee;
	
	while (scanf("%f", &w) != EOF) {
		if (w > 30) {
			printf("Fail\r\n");
		} else {
			fee = 0.2;
		
			while (w >= 1) {
				if (w > 20 && w <= 30) {
					fee += 0.70;
				}
				if (w > 10 && w <= 20) {
					fee += 0.75;
				}
				if (w <= 10) {
					fee += 0.80;
				}
				w--;
			}
			
			fee += 0.80 * w;
			
			printf("%0.2f\r\n", fee);
		}
	}
	
	return 0;
}
