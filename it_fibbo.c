#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
	long long int n,d1=0,sum=0,flag=0;;
	n=atoi(argv[1]);
	while(n>0)
	{
		sum=d1+sum;
		d1=sum-d1;
		if(flag==0)
		{
			d1=1;
			flag=1;
		}
		printf("%lld ",sum);
		n--;
	}
	return 0;
}
