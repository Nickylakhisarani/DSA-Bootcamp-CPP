#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[100],i,j=0,k=0,n;
	cout<<"enter the number of elements in an array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else 
		{
			c[k]=a[i];
			k++;
		}
	}
	cout<<"the even elements in array : "<<endl;
	for(i=0;i<j;i++)
	{
		cout<<b[i]<<endl;
	}
	cout<<"the odd elements in array : "<<endl;
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<endl;
	}
	
	return 0;
}