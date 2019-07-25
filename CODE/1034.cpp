#include <iostream>
using namespace std;

int main(int argc, char** args) {
	long long n;
	int count;
	
	while (cin>>n) {	
		int count = n / 100;
		count = 5*count*count+4*count+1;	
		cout << count << endl;
	}
	
	return 0;
}
