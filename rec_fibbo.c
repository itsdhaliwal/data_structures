#include<stdlib.h>
#include<stdio.h>
int rec(int a,int b,int n)
{
	long long int sum=0;
	sum=a+b;
	if(n<0)
	{
		return 0;
	}
	n--;
	int x;
	printf("%lld ", sum);;
	x=rec(b,sum,n);
}
int main(int argc,const char* argv[])
{
	int n;
	n=atoi(argv[1]);
	int x;
	printf("0 1 ");
	n=n-2;
	x=rec(0,1,n);
}
