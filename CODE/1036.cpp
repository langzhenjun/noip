#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int n;
	
	while (cin>>n) {
		while(n>0) {
			cout << "shang:" << n / 2 << " yu:" << n % 2 << endl;
			n = n / 2;
		}
	}
	
	return 0;
}
