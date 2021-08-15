#include<iostream>
using namespace std;
int main()
{
	int n,i,arr[n],sum=0;
	cout<<"enter size of array :";
	cin>>n;
	float median;
	cout<<"enter elements of array : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"mean of array : "<<sum/n<<endl;
	
	if(n%2 == 0)
	{
		median = (arr[n/2]+arr[(n/2) - 1])/2.0;
		cout<<"median of array : "<<median<<endl;
	}
	else 
	{
		cout<<"median of array : "<<arr[(n/2)]<<endl;
	}
}
