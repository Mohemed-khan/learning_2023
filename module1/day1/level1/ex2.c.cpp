/* Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"  */

#include<stdio.h>
int main(){
	int Physics=90,Math=90,Chemistry=90;
	int sum=Physics+Math+Chemistry;
	float student=(sum/300.00)*100;
	if(student>=90.00 && student<=100.00){
		printf("Grade A");
	}
	else if(student>=75.00 && student<=89.00){
		printf("Grade B");s
	}
	else if(student>=60.00 && student<=74.00){
		printf("Grade C");
	}
	else if(student>=50.00 && student<=59.00){
		printf("Grade D");
	}
	else if(student>=0.00 && student<=49.00){
		printf("Grade F");
	}
}
