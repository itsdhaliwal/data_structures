#include<stdio.h>
#include<stdlib.h>
int binary_search(int arr[],int low,int high,int num)
{
	if(low>high)
	{
		return -1;
	}
	int mid=low+(high-low)/2;
	if(arr[mid]==num)
	{
		return mid;
	}
	if(num>arr[mid])
	{
		return binary_search(arr,mid+1,high,num);
	}
	return binary_search(arr,low,mid-1,num);
}
int main(int argc,const char* argv[])
{
	int i,j,n,num;
	n=argc-2;
	int ar[n];
	num=atoi(argv[1]);
	for(i=0,j=2;i<n;i++,j++)
	{
		ar[i]=atoi(argv[j]);
	}
	int nul,l,h;
	l=ar[0];
	h=ar[n-1];
	nul=binary_search(ar,l,h,num);	
	printf("%d ",nul);
	return 0;
}
