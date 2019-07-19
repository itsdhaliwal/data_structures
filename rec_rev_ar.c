#include<stdlib.h>
#include<stdio.h>
int rev(int l, int a[])
{
	int temp;
	temp=a[l];
	printf("%d ", temp);
	temp=l-1;
	int x;
	if(temp<0)
        {
                return 0;
        }
	x=rev(temp,a);
}
int main(int argc,const char* argv[])
{
	int i,n,j;
	int ar[argc];
	for(i=1,j=0;i<argc;i++,j++)
	{
		ar[j]=atoi(argv[i]);
	}
	n=argc-2;
	int x;
	x=rev(n, ar);
	return 0;
}
