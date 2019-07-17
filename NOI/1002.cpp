#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	float a, b, c, p, s;
	while(scanf("%f %f %f", &a, &b, &c) != EOF) {
		p = (a + b + c) / 2;
		s = sqrt(p * (p-a) * (p-b) * (p-c));
		printf("%.4f\r\n", s);
	}
	return 0;
}
