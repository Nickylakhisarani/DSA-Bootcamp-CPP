#include<iostream>
using namespace std;
int main()
{
	int a[50],i,freq=0,n,key;
	cout<<"Enter number of elements" ;
	cin>>n;
	for(i=0;i<n;i++)
	{
	   cin>>a[i];
    }
   printf("\n enter the number to find frequency");
   cin>>key;
   for(i=0;i<n;i++)
   {
   	  if(a[i]==key)
   	     freq++;
   }
    
       cout<<"the frequency of "<<key<<"is"<<freq;
    return 0;
}
