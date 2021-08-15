#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[n],k,temp;
	cout<<"enter size of array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter value of k : ";
	cin>>k;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Kth smallest element of array : "<<arr[k-1];
	
	return 0;
}
