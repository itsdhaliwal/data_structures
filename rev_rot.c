#include<stdlib.h>
#include<stdio.h>
int rec(int a[],int l)
{
	int min,i,j;
	min=a[0];
	for(i=0;i<l;i++)
	{
		if(min>a[i])
		{
			min=a[i];	
		}
	}
	if(a[0]==min)
	{
		for(i=0;i<l;i++)
		{
			printf("%d ", a[i]);
		}
		return 0;
	}
	int ar[l];
	ar[0]=a[l-1];
	for(i=0,j=1;i<l;i++,j++)
	{
		ar[j]=a[i];
	}
	int nul;
	nul=rec(ar,l);
}
int main(int argc,const char* argv[])
{
	int i,j,n;
	n=argc-1;
	int a[n];
	for(i=0,j=1;i<n;i++,j++)
	{
		a[i]=atoi(argv[j]);
	}
	int nul;
	nul=rec(a,n);
	return 0;
}
