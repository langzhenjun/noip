#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int n;
	long long r;
	
	while (cin >> n) {
		r = 1;
		while (n > 0) {
			r = r * 2;
			n--;
		}
		cout << r << endl;
	}
	
	return 0;
}

