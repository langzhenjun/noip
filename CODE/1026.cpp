#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int t[10];
	int min, max;
	float avg;
	
	while (cin >> t[0] >> t[1] >> t[2] >> t[3] >> t[4] >> t[5] >> t[6] >> t[7] >> t[8] >> t[9]) {
		min = 100;
		max = 0;
		avg = 0;
		
		for (int i=0; i<10; i++) {
			avg += t[i];
			
			if (t[i] > max) {
				max = t[i];
			}
			
			if (t[i] < min) {
				min = t[i];
			}
		}
		
		avg = (avg - min - max) / 8.0;
		
		printf("%.3f\r\n", avg);
	}
	
	return 0;
}
