#include <stdio.h>
int main() {
	int tt , xx;
	char c = 'y';
	while(c == 'y' || c == 'Y') {
	printf("WELCOME TO THE MODULO\n");
	printf("enter 1st: ");
	scanf("%d" , &tt);
	printf("enter 2nd: ");
	scanf("%d" , &xx);
	if(xx == 0) {
		printf("0 is a no go!\n");
	}
	else {
	int tx = tt % xx;
	if(tx == 0) {
	printf("your modulo is moduloing\n");
	}
	else {
	printf("your modulo is not moduloing\n");
	}
	printf("thanks for using\n");
	printf("you want more?\n");
	scanf("%c" , &c);
	continue;
	}
	}
	return 0;
}