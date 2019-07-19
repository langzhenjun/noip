#include <iostream>

int main(int argc, char** args) {
	int a, b, c;
	
	while(scanf("%d%d%d", &a, &b, &c) != EOF) {
		if (!(a+b>c && a+c>b && b+c>a)) {
			printf("NO\r\n");
			continue;
		}
		
		if (a==b || a==c || b==c) {
			printf("Equilateral\r\n");
			continue;
		}
		
		a = a*a;
		b = b*b;
		c = c*c;
		
		if (a+b==c || a+c==b ||b+c==a){
			printf("Right\r\n");
			continue;
		}
		
		printf("General\r\n");
	}
	
	return 0;
}
