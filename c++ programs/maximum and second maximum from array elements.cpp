#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n,max,smax;
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"enter elements of array : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			smax=max;
			max=a[i];
		}
		else if(a[i]>smax && a[i]!=max)
		        {
		        	max=a[i];
				}
				
	}
	cout<<"maximum : "<<max<<endl;
	cout<<"second maximum : "<<smax<<endl;
	
	return 0;
}
