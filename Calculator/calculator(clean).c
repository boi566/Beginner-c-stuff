#include <stdio.h>
#include <string.h>
int main() {
int x;
int y;
char t[2];
printf("enter your choice / , + , - , * ?: ");
scanf("%1s" , t);
printf("enter 1st number: ");
scanf("%d" , &x);
printf("enter 2nd number: ");
scanf("%d" , &y);
if(strcmp(t , "+") == 0) {
printf("sum: %d\n" , x+y);
}
else if(strcmp(t , "/") == 0) {
if(y == 0) {
	printf("sorry i cannot fulfill this request.\n");
}
else {
printf("quotient: %d\n" , x/y);
}
}
else if(strcmp(t , "-") == 0) {
printf("difference: %d\n" , x-y);
}
else if(strcmp(t , "*") == 0) {
printf("product: %d\n" , x*y);
}
else {
	printf("idk.\n");
}
return 0;
}