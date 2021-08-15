#include<iostream>
using namespace std;
int main()
{
	int n,a[50],i;
	cout<<"enter size of array";
	cin>>n;
	cout<<"enter elements in an array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			a[i]=0;
		}
		else 
		{
			a[i]=1;
		}
	}
	cout<<"after replacement array is : "<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
