#include<iostream>
using namespace std;
int rev_str(string s,int n)
{
	int i;
	char temp;
	temp=s[n-1];
	cout<<temp;
	n--;
	if(n==0)
	{
		return 0;
	}
	else
	{
		i=rev_str(s,n);
	}
}
int main(int argc,const char* argv[])
{
	int i,j,n;
	string str=argv[1];
	n=str.length();
	j=rev_str(str,n);
	return 0;
}
