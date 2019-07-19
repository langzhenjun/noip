#include <iostream>

int main(int argc, char** args) {
	int n, m;
	char c;
	
	while (scanf("%d", &n) != EOF) {
		m = n % 123;
		if (m >= 97 && m <= 122) {
			c = m;
		} else {
			m = n % 91;
			if (m >= 65 && m <= 90) {
				c = m;
			} else {
				c = '*';
			}
		}
		
		printf("%c\r\n", c);
	}
	
	return 0;
}
