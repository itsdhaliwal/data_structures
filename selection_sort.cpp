#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(int argc,const char* argv[])
{
	int i,j,n,temp,loc;
	n=argc-1;
	int a[n];
	for(i=0,j=1;i<n;i++,j++)
	{
		a[i]=atoi(argv[j]);
	}
	for(i=0;i<n;i++)
	{
		loc=i;
		for(j=i;j<n;j++)
		{	
			if(a[j]<a[loc])
			{
				loc=j;
			}
		}
		swap(&a[i],&a[loc]);
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
