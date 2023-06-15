/* Write a function to find if a give character is vowel using switch case statements, 
    - If vowel, return 1
    - If not vowel, return 0;
   In main print,
   "Vowel" if return value is 1
   "Not Vowel" if return value is 1
*/


#include<stdio.h>
int vowel(char a){
	switch(a){
		case 'a':
			return 1;
			break;
		case 'e':
			return 1;
			break;
		case 'i':
			return 1;
			break;
		case 'o':
			return 1;
			break;
		case 'u':
			return 1;
			break;
	    default:
	    	return 0;
	    	break;
	}
}
int main(){
	char a='i',b;
	b=vowel(a);
	if(b==1){
		printf("it is a vowel %d",b);
}
	else{
		printf("it is not a vowel %d",b);
}
return 0;
}

