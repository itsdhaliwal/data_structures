#include<stdlib.h>
#include<stdio.h>
int main(int argc,const char* argv[])
{
	int i,j,n,temp,flag=0,g,hcf;
	n=argc-1;
	int a[n];
	for(i=1,j=0;i<argc;i++,j++)
	{
		a[j]=atoi(argv[i]);
	}
	temp=a[0];
	for(i=0;i<n;i++)
	{
		if(temp>a[i])
		{
			temp=a[i];
		}
	}
	for(j=1;j<=temp;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]%j==0)
			{
				flag++;
				g=j;
			}
		}
		if(flag==n)
		{
			hcf=g; 
		}
		flag=0;
	}
	printf("HCF = %d ", hcf);
	return 0;
}
