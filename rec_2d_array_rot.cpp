#include<iostream>
using namespace std;
#define Rotations 1
#define M 5
#define N 5
void rec(int m,int n,int a[M][N],int row,int col)
{
	int prev=0,curr=0;
	prev=a[row+1][col];
	for(int i=col;i<n;i++)
	{
		curr=a[row][i];
		a[row][i]=prev;
		prev=curr;
	}
      	for(int i=row+1;i<n;i++)
        {
                curr=a[i][n-1];
                a[i][n-1]=prev;
                prev=curr;
        }
      	for(int i=n-2;i>=col;i--)
        {
                curr=a[m-1][i];
                a[m-1][i]=prev;
                prev=curr;
        } 
       	for(int i=m-2;i>0;i--)
        {
                curr=a[i][col];
                a[i][col]=prev;
                prev=curr;
        }
	row++;
	col++;
	m--;
	n--;
	if(row>=M/2 || col>=N/2)
	{
		return;
	}
	rec(m,n,a,row,col);
}
int main(void)
{
	int a[M][N]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	for(int i=0;i<Rotations;i++)
	{
		int m=M;
		int n=N;
		int prev=0,curr=0,row=0,col=0;
		rec(m,n,a,row,col);
		 for(int i=0;i<M;i++)
                {
                        for(int j=0;j<N;j++)
                        {
                                cout<<a[i][j]<<" ";
                        }
                        cout<<endl;
                }

	}
	return 0;
}
