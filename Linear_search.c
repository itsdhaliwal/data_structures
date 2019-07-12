#include<stdio.h>
int main()
{
int i,n;
int a[10];
for(i=0;i<10;i++)
{
	scanf("%d",&a[i]);
}
scanf("%d",&n);
for(i=0;i<10;i++)
{
	if(a[i]==n)
	{	
		printf("Number Found at ");
		printf("%d\n",i);
	}
	
}
return 0;
}
