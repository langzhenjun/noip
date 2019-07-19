#include <iostream>

int main(int argc, char** args) {
	double x, f;
	
	while (scanf("%lf", &x) != EOF) {
		if (x>=0 && x<5) {
			f = x + 2.5;
		} else if (x>=5 && x<10) {
			f = 2 - 1.5*(x-3)*(x-3);
		} else if (x>=10 && x<20) {
			f = x / 2 -1.5;
		}
		
		printf("%.3f\r\n", f);
	}
	
	return 0;
}
