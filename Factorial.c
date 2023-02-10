#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	if(n>0){
		printf("Factorial: %d",fact);
	}
	else{
		printf("Invalid input...");
	}
}
