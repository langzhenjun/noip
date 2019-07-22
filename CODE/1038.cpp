#include <iostream>
#include <memory.h>
using namespace std;

int main(int argc, char** args) {
	bool a[14];
	int n[25];
	
	while (cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5] >> n[6] >> n[7] >> n[8] >> n[9] >> n[10]
	 >> n[11] >> n[12] >> n[13] >> n[14] >> n[15] >> n[16] >> n[17] >> n[18] >> n[19] >> n[20]
	  >> n[21] >> n[22] >> n[23] >> n[24]) {
	  	memset(a, false, 14 * sizeof(bool));
	  	
		for (int i=0; i<25; i++) {
			a[n[i]] = !a[n[i]];
		}
		
		for (int j=1; j<14; j++) {
			if (a[j] == true) {
				cout << j << endl;
				break;
			}
		}
	}
	
	return 0;
}

