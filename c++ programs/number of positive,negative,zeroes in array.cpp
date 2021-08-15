#include<iostream>
using namespace std;
int main()
{
	int posi=0,neg=0,zeroes=0,a[50],n,i;
	cout<<"enter number of elements in an array : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			neg++;
		}
		else if(a[i]>0)
		     {
		     	posi++;
			 }
			 else 
			 {
			 	zeroes++;
			 }
	}
	
	cout<<"positive numbers :"<<posi<<endl;
	cout<<"negative numbers :"<<neg<<endl;
	cout<<"number of zeroes :"<<zeroes<<endl;
}
