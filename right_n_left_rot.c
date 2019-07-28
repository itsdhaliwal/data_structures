#include<stdlib.h>
#include<stdio.h>
int clockwise_rot(int a[],int l,int n)
{
	int i,j;
	int ar[l];
	ar[l-1]=a[0];
	for(i=0,j=1;i<l-1;i++,j++)
	{
		ar[i]=a[j];
	}
	n--;

	if(n==0)
	{
		for(i=0;i<l;i++)
		{
			printf("%d ",ar[i]);
		}
		return 1;
	}
	int nul;
	nul=clockwise_rot(ar,l,n);
}
int a_clockwise_rot(int a[],int l,int n)
{
	int i,j;
        int ar[l];
        ar[0]=a[l-1];
        for(i=0,j=1;i<l-1;i++,j++)
        {
                ar[j]=a[i];
        }
        n--;
        if(n==0)
        {
                for(i=0;i<l;i++)
                {
                        printf("%d ",ar[i]);
		}
		return 1;
        }
        int nul;
        nul=a_clockwise_rot(ar,l,n);

}
int main(int argc,const char* argv[])
{
	int i,j,n,l,l1;
	n=argc-3;
	int ar[n];
	int a1[n/2],a2[(n/2)+1];
	int c,ac;
	c=atoi(argv[1]);
	ac=atoi(argv[2]);
	for(i=0,j=3;i<n;i++,j++)
	{
		ar[i]=atoi(argv[j]);
	}
	if(n%2==0)
	{
		l=n/2;
		l=l1;
		for(i=0,j=l;i<l;i++,j++)
		{
			a1[i]=ar[i];
			a2[i]=ar[j];
		}
	}
	else
	{
                l=n/2;
                l1=l+1;
		for(i=0,j=l;i<l;i++,j++)
		{
			a1[i]=ar[i];
			a2[i]=ar[j];
		}
		a2[l]=ar[n-1];

	}
	int nul,nul1;
	nul=clockwise_rot(a1,l,c);
	nul1=a_clockwise_rot(a2,l1,ac);
	return 0;
}
