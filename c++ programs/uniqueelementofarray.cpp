#include<iostream>
using namespace std;
int main()
{
	int n,i,j,counter=0,arr[n];
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"enter elements of array : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			counter++;
		}
		if(counter==0)
		{
			cout<<arr[i]<<" ";
		}
	}
}
