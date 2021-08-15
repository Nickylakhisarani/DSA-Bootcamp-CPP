#include<iostream>
using namespace std;
int main()
{
	int n,i,a[50],min,smin;
	cout<<"enter value of n : ";
	cin>>n;
	cout<<"enter array elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			smin=min;
			min=a[i];
		}
		else if(a[i]<smin && a[i]!=min)
		       {
		       	smin=a[i];
			   }
	}
	cout<<"minimum array element : "<<min<<endl;
	cout<<"second minimum array element : "<<smin<<endl;
	
}
