#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n,even=0,odd=0;
	
	cout<<"enter the size of an array : ";
	cin>>n;
	cout<<"enter elements in array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else 
		{
			odd++;
		}
	}
	cout<<"even numbers "<<even<<endl;
	cout<<"odd numbers "<<odd<<endl;
	
}
