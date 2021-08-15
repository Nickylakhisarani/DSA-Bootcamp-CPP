#include<iostream>
using namespace std;
int main()
{
	int a[50],b[50],c[50],n,i;
	cout<<"enter size of first array : ";
	cin>>n;
	
	cout<<"enter elements of first array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//cout<<"enter size of second array : ";
	//cin>>n;
	cout<<"enter elements of second array : ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	cout<<"addition of arrays : ";
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		cout<<c[i]<<endl;
	}
	return 0;
	
}
