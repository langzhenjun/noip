#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	float f, c;
	while(scanf("%f", &f) != EOF) {
		c = (f - 32) * 5 / 9;
		printf("%.4f\r\n", c);
	}
	return 0;
}
