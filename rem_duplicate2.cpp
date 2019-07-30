#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,n1,n2;
	string str1=argv[1];
	n1=str1.length();
	string str2=argv[2];
	n2=str2.length();
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(str1[i]==str2[j])
			{
				str1[i]=0;
			}
		}
	}
	cout<<str1;
	return 0;
}

