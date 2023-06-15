/* Write a function to find the type of the character passed
    - 'A' to 'Z', return 1
    - 'a; to 'z', return 2
    - '0' to '9', return 3
    - Any Other printable symbols, return 4
    - Non printable symbols, return 5 
*/


#include<stdio.h>
int ch(char a){
	if(a=='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'
	||a=='i'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'
	||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z'){
		return 1;
	}
	else if(a=='A'||a=='B'||a=='C'||a=='D'||a=='E'||a=='F'||a=='G'||a=='H'
	||a=='I'||a=='J'||a=='K'||a=='L'||a=='M'||a=='N'||a=='O'||a=='P'||a=='Q'
	||a=='R'||a=='S'||a=='T'||a=='U'||a=='V'||a=='W'||a=='X'||a=='Y'||a=='Z'){
		return 2;
	}
	else if(a=='0'||a=='1'||a=='2'||a=='3'||a=='4'||a=='5'||
	a=='6'||a=='7'||a=='8'||a=='9'){
		return 3;
	}
	else if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%'){
		return 4;
	}
	else{
		return 5;
	}
}
int main(){
	int d;
	char b='#';
	d=ch(b);
	printf("%d",d);
}
