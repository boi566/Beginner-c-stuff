#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
	int inp;
	srand(time(NULL));
	int ran = (rand() % 100) + 1;
	while(1) {
	printf("enter a number: ");
	scanf("%d" , &inp);
	if(inp > ran) {
		printf("too high.\n");
		continue;
	}
	else if(inp < ran) {
		printf("too low. \n");
		continue;
	}
	else if(inp == ran) {
		printf("yessir you got it right, the number was %d" , ran);
		break;
	}
	else {
		printf("try again. \n");
		continue;
	}
	}
	return 0;
}