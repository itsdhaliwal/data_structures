#include<stdlib.h>
#include<stdio.h>
int main(int argc,const char* argv[])
{
	int i,j,n,flag=0,x,y;
	n=argc-1;
	int a[n];
	int mul=1;
	for(i=0,j=1;i<n;i++,j++)
	{
		a[i]=atoi(argv[j]);
	}
	mul=a[0];
	for(i=0;i<n;i++)
	{
		if(mul>a[i]);
		{
			mul=a[i];
		}
	}
	for(i=1;i>0;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i%a[j]==0)
			{
				flag++;
				x=i;
			}
		}
		if(flag==n)
		{
			y=x;
			break;
		}
		flag=0;
	}
/*
	mul=1;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]/y;
		mul=mul*a[i];
	}
*/
	printf("LCM = %d ", y);

	return 0;
}
