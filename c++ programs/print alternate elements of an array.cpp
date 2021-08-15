#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n;
	cout<<"enter the size of array : ";
	cin>>n;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"alternate array elements : ";
	for(i=0;i<n;i=i+2)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
