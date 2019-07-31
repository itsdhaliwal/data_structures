#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,n1,n2;
	char temp;
	string str1=argv[1];
	string str2=argv[2];
	n1=str1.length();
	n2=str2.length();
	if(n1==n2)
	{
		for(i=0;i<n1;i++)
		{
			temp=str1[i];
			str1[i]=str2[i];
			str2[i]=temp;
		}
		cout<<str1<<endl<<str2;
	}
	else
	{
		cout<<"Cannot swap"<<endl;
	}
	return 0;
}
