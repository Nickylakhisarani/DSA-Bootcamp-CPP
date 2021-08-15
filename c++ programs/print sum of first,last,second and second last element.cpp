#include<iostream>
using namespace std;
int main()
{
	int n,i,a[50],j;
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"addition is : ";
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		cout<<a[i]+a[j]<<endl;
	}
	
	return 0;
}
