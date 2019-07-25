#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int a, b, r;
	
	while(cin >> a >> b) {
		a = a % 10;
		r = 1;
		while (b > 0) {
			r = (r * a) % 10;
			b--;
		}
		cout << r << endl;
	}
	
	return 0;
}
