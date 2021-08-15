#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n,position,value;
	cout<<"enter the size of array : ";
	cin>>n;
	cout<<"enter array elements :";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the position where you want to insert : ";
	cin>>position;
	cout<<"enter the value you want to insert :";
	cin>>value;
	
	for(i=n+1;i>=position;i--)
	{
		a[i+1]=a[i];
	
	}
	a[position]=value;
	cout<<"sorted array : ";
	for(i=0;i<n+1;i++)
	{
		cout<<a[i];
	}
	return 0;
}
