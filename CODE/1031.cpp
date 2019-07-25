#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int n;
	int w, s, e;
	
	while (cin >> n) {
		w = n * 2 - 1;		
		for (int i=0; i<n; i++) {
			s = w / 2 - i;
			e = w / 2 + i;
			for (int j=0; j<w; j++) {
				if (j >= s && j <= e) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	
	return 0;
} 
