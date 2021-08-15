#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,arr[n];
	cout<<"enter the size of array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<max(arr[i],arr[i-1])<<" ";
	}
	return 0;
}
