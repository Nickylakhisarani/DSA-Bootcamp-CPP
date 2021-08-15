#include<iostream>
using namespace std;
int main()
{
	/*bubble sort : reapetedly swap two adjacent elements if they are in 
	wrong order    
	1st iteration : n-1
	2nd iteration : n-2 and so on
	for ith iteration : n-i
	*/
	
	int n,i;
	cout<<"enter the value of n : ";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int counter=1;               //for n-ith iteration
	while(counter<n-1)
	{
		for(i=0;i<n-counter;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
