#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	 
	float top = 15;    // 已知顶边长
	float bottom = 25; // 已知底边长
	float s1 = 100;    // 已知三角形面积
	float s2;          // 待求梯形面积 
	
	s2 = s1 * bottom / top + s1;
	
	cout << s2 << endl;
	
	return 0;
}
