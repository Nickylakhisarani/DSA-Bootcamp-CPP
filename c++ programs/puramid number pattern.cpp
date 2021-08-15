#include<iostream>
using namespace std;
int main()
{
	int i,j,n,c=1;
	cout<<"enter the value of n : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n+1-i && j<=n-1+i)
			{
				cout<<c;
				if(j<n)
				{
					c++;
				}
				else
				{
					c--;
				}
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
