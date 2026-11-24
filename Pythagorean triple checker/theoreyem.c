#include <stdio.h>
int theoryem(int x, int y , int z) {
	if(x * x == (y * y) + (z * z)) {
		printf("your pythagorean triplets are real\n");
	}
	else {
		printf("your pythagorean triplets are false\n");
	}
	return 0;
}
int main() {
	int x;
	int y;
	int z;
	printf("x is largest, y is 2nd largest and z is smallest.\n");
	printf("enter x: ");
	scanf("%d" , &x);
	printf("enter y: ");
	scanf("%d" , &y);
	printf("enter z: ");
	scanf("%d" , &z);
	theoryem(x , y , z);
	return 0;
}