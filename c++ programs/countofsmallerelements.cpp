#include<iostream>
using namespace std;
int main()
{
	int i,n,k=0,num,a[n];
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"enter a number";
	cin>>num;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<=num)
		k++;
	}
	cout<<k;
}
