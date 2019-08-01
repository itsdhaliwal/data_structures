#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,l1,l2;
	string str1=argv[1];
	string str2=argv[2];
	l1=str1.length();
	l2=str2.length();
	if(l1==l2)
	{
		for(i=0;i<l1;i++)
		{
			if(str1[i]>=65 && str1[i]<=90)
			{
				str1[i]=str1[i]+32;
			}
			if(str2[i]>=65 && str2[i]<=90)
			{
				str2[i]=str2[i]+32;
			}
		}
		if(str1==str2)
        	{
                	cout<<"The Strings are Equal"<<endl;
       		}
       		else
       		{
                	cout<<"The Strings are Not Equal"<<endl;
       		}

	}
	else
	{
		cout<<"Strings are not equal"<<endl;
	}
	return 0;
}
// 65 90 vadde akhar
// 97 122 chotte akhar
