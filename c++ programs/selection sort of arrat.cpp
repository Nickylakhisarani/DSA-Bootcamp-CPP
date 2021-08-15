#include<iostream>
using namespace std;
int main()
{
	// selection sort
	// find the minimum element in unsorted array and swap it with element at begining 
	//  12,45,23,51,19,8
	//  8,45,23,51,19,12
	//  8,12,23,51,19,45
	//  8,12,19,51,23,45
	//  8,12,19,23,51,45
	//  8,12,19,23,45,51
	
	cout<<"enter size of array : ";
	int n,a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
