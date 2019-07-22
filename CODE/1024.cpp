#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** args) {
	int n, count;
	
	while (cin >> n) {
		count = 0;
		int mid = sqrt(n);
		for (int i = 1; i<=mid; i++) {
			if (n % i == 0) {
				if (i * i == n) {
					count += 1;
				} else {
					count += 2;
				}
			}
		}
		
		cout << count << endl;
	}
	
	return 0;
}
