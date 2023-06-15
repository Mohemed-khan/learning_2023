#include<stdio.h>
int main(){
	int a=20,b=10,c=4;
	if(a>b && a>c){
		printf("A is greatest");
	}
	else if(b>a && b>c){
		printf("B is greatest");
	}
	else{
		printf("C is greatest");
	}
	return 0;
}
