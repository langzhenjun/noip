#include <iostream>

int main(int argc, char** argv) {
	long n, m, a, r;
	while (scanf("%ld %ld %ld", &n, &m, &a) != EOF) {
		r = (n / a) * (m / a);
		printf("%ld\r\n", r);
	}
	
	return 0;
}
