#include<iostream>
using namespace std;
int main()
{
	int arr[50],n,i,max,min;
	cout<<"enter the size of the array : ";
	cin>>n;
	cout<<"enter the elements of the array : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max = arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	
	min = arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"largest element : "<<max;
	cout<<"smallest element : "<<min;
	
	return 0;
}
