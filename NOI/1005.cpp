#include <iostream>
#include <math.h>

int main(int argc, char** argv) {
	int r, x, p;
	float y;
	while (scanf("%d %d %d", &r, &x, &p) != EOF) {
		y = x * pow((100 + r) / 100.0, p);
		printf("%.2f\r\n", y);
	}
	
	return 0;
}
