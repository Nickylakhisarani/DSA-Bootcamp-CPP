#include<iostream>
using namespace std;
int main()
{
	int a[20],i,j,n;
	cout<<"enter the number of elements in an array : ";
	cin>>n;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	cout<<"reverse of an array : ";
	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
