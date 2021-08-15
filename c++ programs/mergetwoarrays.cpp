#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,arr[n],arr1[m],k=0,merged[n+m];
	cout<<"enter size of first array :";
	cin>>n;
	cout<<"enter size of second array :";
	cin>>m;
	cout<<"enter elements of first array : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter elements of second array : ";
	for(j=0;j<m;j++)
	{
		cin>>arr1[j];
	}
	
	while(i<n && j<m)
	{
		if(arr[i]>arr1[j])
		{
				merged[k]=arr1[j];
				k++;
				j++;
		}
			else 
			{
		        merged[k]=arr[i];
				k++;
				i++;		
			}
		}
		
		while(i<n)
		{
			merged[k]=arr[i];
			k++;
			i++;
		}
		while(j<m)
		{
			merged[k]=arr[i];
				i++;
				k++;
			
		}
		
		cout<<"merged array : ";
		for(i=0;i<k;i++)
		{
			cout<<merged[i]<<" ";
		}
	
	return 0;
}
