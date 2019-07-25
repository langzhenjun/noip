#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int m, n;
	
	while (cin >> m >> n) {
		if (m % n == 0 || n % m == 0) {
			cout << "Yes" << endl;
			continue;
		}	
		
		int min = m > n ? n : m;
		int i;
		for (i=2; i < min; i++) {
			if (m % i == 0 && n % i == 0) {
				cout << "No" << endl;
				break;
			} 
		}
		
		if (i == min) {
			cout << "Yes" << endl;
		}
	}
	
	return 0;
}
