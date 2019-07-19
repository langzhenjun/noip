#include <iostream>
using namespace std;

int main(int argc, char** args) {
	double a, b;
	while (scanf("%lf %lf", &a, &b) != EOF) {
		while (a >= b) {
			a = a - b;
		}
		printf("%.2lf\r\n", a);
	}
	
	return 0;
} 
