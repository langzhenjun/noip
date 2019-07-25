#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** args) {
	char str[100];
	
	while (cin >> str) {
		for (int i=0; i<100; i++) {
			if (isalpha(str[i])) {
				switch (str[i]) {
					case 'X':str[i] = 'A';break;
					case 'Y':str[i] = 'B';break;
					case 'Z':str[i] = 'C';break;
					case 'x':str[i] = 'a';break;
					case 'y':str[i] = 'b';break;
					case 'z':str[i] = 'c';break;
					default: str[i] = str[i] + 3;
				}
				
			}
		}
		
		cout << str << endl;	
	} 
	
	return 0;
}
