#include <stdio.h>
int perimeter(int y,int z) {
	return 2*(y+z);
}
int main() {
	int y;
	int z;
	printf("enter length: ");
	scanf("%d" , &y);
	printf("enter breadth: ");
	scanf("%d" , &z);
	printf("answer: %d\n" , perimeter(y , z));
	return 0;
}