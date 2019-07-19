#include <iostream>

int main(int argc, char** args) {
	int m, f;
	while (scanf("%d%d", &m, &f) != EOF) {
		if (m + f < 10) {
			printf("water\r\n");
		} else {
			if (m > f) {
				printf("tree\r\n");
			} else {
				printf("tea\r\n");
			}
		}
	}
	
	return 0;
}
