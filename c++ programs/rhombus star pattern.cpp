#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=n;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}
