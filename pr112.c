#include<stdio.h>

void main (){
	int n,m;
	printf("Enter the size of row : ");
	scanf("%d",&n);
	printf("Enter the size of row : ");
	scanf("%d",&m);
	int a[n][m];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		
		printf("a[%d][%d] => ",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	int *k;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		
		a[i][j]=a[i][j]*a[i][j]*a[i][j];
		k=&a[i][j];
		printf("%d\n",*k);
	}
	}

	
}
