#include <iostream>

int main(int argc, char** args) {
	int n;
	while(scanf("%d", &n) != EOF) {
		switch(n) {
			case 1: printf("Monday\r\n");break;
			case 2: printf("Tuesday\r\n");break;
			case 3: printf("Wednesday\r\n");break;
			case 4: printf("Thursday\r\n");break;
			case 5: printf("Friday\r\n");break;
			case 6: printf("Saturday\r\n");break;
			case 7: printf("Sunday\r\n");break;
			default: break;
		}
	}
	return 0;
}
