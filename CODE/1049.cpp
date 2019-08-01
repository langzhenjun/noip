#include <iostream>
#include <memory.h>
using namespace std;

int main(int argc, char** args) {
	int m, n, t;
	int a[100][100];
	
	while(cin>>m>>n) {
		memset(a, 0, 10000);
				
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				cin >> a[i][j];
			}
		}
		
		for(int i=0;i<n;i++) {
			for(int j=m-1;j>=0;j--) {
				cout << a[j][i] << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
