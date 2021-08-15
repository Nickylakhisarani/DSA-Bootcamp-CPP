#include<iostream>
using namespace std;
int main()
{
	int n,temp,r,sum=0,fact=1,i;
	cout<<"enter a number to check whether it is strong number or not ";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;
		}
	
		sum=sum+fact;
		
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"number is strong number"<<endl;
	}
	else 
	{
		cout<<"number is not a strong number"<<endl;
	}
	return 0;
}
