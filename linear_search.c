#include <stdio.h>  
int i;
int linearSearch(int a[], int n, int val) 
{  
  for (i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i;  
    }  
  return -1;  
}  
int main()
{ 
  	int n,a[n],val;
  	printf("\nEnter the no. of elements:");
  	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nEnter element to be searched:");
	scanf("%d",&val);
  int res = linearSearch(a, n, val);     
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}
