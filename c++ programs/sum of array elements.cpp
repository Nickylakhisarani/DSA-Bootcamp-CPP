#include<iostream>
using namespace std;
int main()
{
	int n,arr[20],sum=0,i;
	cout<<"enter the size of array ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"sum of array elements : ";
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	for(i=0;i<n;i++)
	{ 
	    cout<<sum;       
    }
	
	return 0;
}
