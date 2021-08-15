#include<iostream>
using namespace std;
int main()
{
	int a[50],n,pos,i;
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter position for deletion : ";
	cin>>pos;
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"array after deletion : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
