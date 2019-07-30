#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,n;
	string str=argv[1];
	n=str.length();
	for(i=n-1;i>=0;i--)
	{
		cout<<str[i];
	}
	cout<<endl;
	return 0;
}
