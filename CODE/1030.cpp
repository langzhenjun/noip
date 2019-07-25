#include <iostream>
using namespace std;

int main(int argc, char** args) {
	long long n;
	int pos;
	
	while (cin >> n) {
		pos = 1;
		while(n != 1) {
			if (n % 2 == 0) {
				n = n / 2;
				pos++;
			} else {
				n = (3 * n + 1) / 2;
				pos += 2;
			}
		}
		
		cout << pos << endl;	
	}
	
	return 0;
}
