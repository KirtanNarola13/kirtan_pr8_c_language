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
