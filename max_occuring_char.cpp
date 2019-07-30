#include<iostream>
using namespace std;
int main(int argc,const char* argv[])
{
        int i,j,n,count=0,temp=0,loc=0;
        string str=argv[1];
        n=str.length();
	int a[n];
        for(i=0;i<n;i++)
        {
                for(j=i;j<n;j++)
                {
                        if(str[i]==str[j])
                        {
                                count++;
                        }
                }
		a[i]=count;
                count=0;
		  if(temp<a[i])
                {
                        temp=a[i];
                        loc=i;
                }

        }
	for(i=0;i<n;i++)
	{
		if(a[i]==temp)
		cout<<str[i]<<" occured a max of "<<temp<<" times"<<endl;
	}
        return 0;
}

