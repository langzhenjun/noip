#include <iostream>

int main(int argc, char** args) {
	float x, y;
	while (scanf("%f  %f", &x, &y) != EOF) {
		if (x >= -1 && x <= 1 && y >= -1 && y <= 1) {
			printf("Yes\r\n");
		} else {
			printf("No\r\n");
		}
	}
	return 0;
}
