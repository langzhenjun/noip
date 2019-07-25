#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int n;
	
	while (cin >> n) {
		int w = n * 2 - 1;
		int s, e, v;
		for (int i=0; i<2*n; i++) {
			v = 1;

			if (i < n) {
				s = w / 2 - i;
				e = w / 2 + i;
			} else {
				s = i-n+1;
				e = w - (i-n) -2;
			}
			
			for (int j=0; j<w; j++) {
				if (j>=s && j<=e) {
					cout << v;
					v++;
				} else {
					cout << " "; 
				}
			}
			cout << endl; 
		}
	}
	
	return 0;
}
