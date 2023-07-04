/*
Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/


#include<stdio.h>

void main (){
	char a[300];
	char *p;
	printf("Enter your word : ");
	gets(a);
	p=a;
	int count = 0;
	int i;
	for(i=0;*p!='\0';i++){
		count++;
		p++;
	}
	printf("%d",count);
}
