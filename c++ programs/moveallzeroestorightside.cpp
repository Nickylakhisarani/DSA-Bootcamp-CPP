#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[n],temp,j=0;
	cout<<"enter the size of array : ";
	cin>>n;
	cout<<"enter elements of array : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
		    temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;	
		}
	}
	
	cout<<"array is : "
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
