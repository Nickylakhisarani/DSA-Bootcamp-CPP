#include<iostream>
using namespace std;
int linearsearch(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return i;                        //i is the index
		}
	}
	return -1;
}
int main()
{
	int n,a[n];
	cout<<"enter size of an array : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element which you want to find "<<endl;
	int key;
	cin>>key;
	
	cout<<linearsearch(a,n,key)<<endl;               //function call
}
