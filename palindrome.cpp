#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,n,flag=0;
	string str=argv[1];
	n=str.length();
	for(i=0,j=n-1;i<n;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not Palindrome";
	}
	return 0;
}
