#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
	int i,j,n,count=0;
	string str=argv[1];
	n=str.length();
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(str[i]==str[j])
			{
				count++;
			}
		}
		if(count==1)
                        {
                                cout<<str[i];
                        }

		count=0;
	}
	return 0;
}
