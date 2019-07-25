#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int n, t;
	while(cin>>n) {
		while(true) {
			t = 0;
			while(n>0) {
				t += n % 10;
				n = n / 10;
			}
			if (t >= 10)	{
				n = t;
				
			} else {
				break;
			}
		}
		cout << t << endl;
		
	}
	return 0;
}
