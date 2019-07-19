#include<stdio.h>
int main()
{
	int i,j,n,num,f,flag=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&num);
	int start,end,mid;
	start=0;
	end=n-1;
	mid=(start+end)/2;
	while(start<=end)
	{
		if(a[mid]<num)
		{
			start=mid+1;
		}
		else if(a[mid]==num)
		{
			printf("%d Found at %d.\n",num,mid);
			break;
		}
		else
		end=mid-1;
		mid=(start+end)/2;
	}
	if (start<end);
	printf("Not Found");
	return 0;
}
