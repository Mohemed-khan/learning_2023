/*  Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.  */

#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	char d;
	printf("Enter the operator:");
	scanf("%c",&d);
	printf("Enter Number1:");
	scanf("%d",&a);
	printf("Enter Number2:");
	scanf("%d",&b);
	switch(d){
		case '+':
			printf("%d", a+b);
		    break;
		case '-':
			printf("%d", a-b);
		    break;
		case '*':
			printf("%d", a*b);
		    break;
		case '/':
			printf("%d", a/b);
		    break;
	    default:
	    	printf("Invalid operator or incorrect a and b value");
	}
	return 0;
}
