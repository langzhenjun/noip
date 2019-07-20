#include <iostream>
using namespace std;

int main(int argc, char** args) {
	int d, gs, ss, cs;
	int g, s, c;
	
	while (cin >> d) {
		gs = ss = cs = 0;
		while(d > 0) {
			cin >> g >> s >> c;
			gs += g;
			ss += s;
			cs += c;
			d--;
		}
		
		cout << gs << " " << ss << " " << cs << " " << gs + ss + cs << endl;
	}
	
	return 0;
}
