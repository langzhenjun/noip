#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int n;
	while(cin>>n) {
		int line = 1;
		while(line<=n) {
			int j = 1;
			while(j<=line){
				cout << j << "*" << line << "=" << j*line << " ";
				j++;
			}
			cout << endl;
			line++;
		}
	}
	return 0;
}
