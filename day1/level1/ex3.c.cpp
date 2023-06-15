/*Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
	*/

#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	int b,t,p,m,c;
	float d;
	printf("Enter student Name:");
	fgets(a,20,stdin);
	printf("Enter Roll No:");
	scanf("%d",&b);
	printf("Enter the Physics marks:");
	scanf("%d",&p);
	printf("Enter Math marks:");
	scanf("%d",&m);
	printf("Enter Chemistry marks:");
	scanf("%d",&c);
	t=p+m+c;
	printf("the total marks obtain by %s is %d\n",a,t);
	printf("the percentage is %.2f\n",(t/300.00)*100);
	return 0;
}
