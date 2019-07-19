#include<stdlib.h>
#include<stdio.h>
int main(int argc,const char* argv[])
{
	int i,j=0,n;
	n=argc;
	int ar[n]; 
	for(i=1;i<n;i++,j++)
	{
		ar[j]=atoi(argv[i]);
	}
	for(i=n-2;i>=0;i--)
	{
		printf("%d", ar[i]);
	}
	return 0;
}
