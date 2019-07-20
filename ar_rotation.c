#include<stdlib.h>
#include<stdio.h>
int rotation(int a[],int l,int r)
{
	int i,j;
	int ar[l];
	ar[l-1]=a[0];
	for(i=0,j=1;i<l-1;i++,j++)
	{
		ar[i]=a[j];
	}
	r=r-1;
	if(r==0)
	{
		for(i=0;i<l;i++)
		{
			printf("%d ", ar[i]);
		}
		return 0;	
	}
	i=rotation(ar,l,r);
}
int main(int argc,const char* argv[])
{
	int x,j,i;
	x=atoi(argv[1]);
	int n;
	n=argc-2;
	int ar[n];
	for(i=2,j=0;i<argc;i++,j++)
	{
		ar[j]=atoi(argv[i]);
	}
	int nul;
	nul=rotation(ar,n,x);
	return 0;
}
