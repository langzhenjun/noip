#include <iostream>

int main(int argc, char** args) {
	double lirun, jiangjin; 
	
	while (scanf("%lf", &lirun) != EOF) {
		jiangjin = 0;
						
		if (lirun > 1000000 ) {
			jiangjin += (lirun - 1000000) * 0.01;
			lirun = 1000000;
		}
		
		if (lirun > 600000) {
			jiangjin += (lirun - 600000) * 0.015;
			lirun = 600000;
		}
		
		if (lirun > 400000) {
			jiangjin += (lirun - 400000) * 0.03;
			lirun = 400000;
		}
		
		if (lirun > 200000) {
			jiangjin += (lirun - 200000) * 0.05;
			lirun = 200000;
		}
		
		if (lirun > 100000) {
			jiangjin += (lirun - 100000) * 0.075;
			lirun = 100000;
		}
		
		jiangjin += lirun * 0.1;
		
		printf("%.3f\r\n", jiangjin);
	}
	
	return 0;
}
