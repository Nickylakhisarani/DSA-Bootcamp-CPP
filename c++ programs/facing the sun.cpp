#include<iostream>
using namespace std;
int countbuliding(int arr[],int n);
int countbuliding(int arr[],int n)
{
	int count=1;
	int curr_max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>curr_max || arr[i] == curr_max)
		{
			count++;
			curr_max=arr[i];
		}
	}
	return count;
}
int main()
{
	int arr[]={7,4,8,2,9,6};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<countbuilding(arr,n);
	
	return 0;
}
