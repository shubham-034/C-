#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"Enter Five Value ";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Printing the value "<<endl;
		for(int i=0;i<5;i++)
	{
		cout<<a[i]<<'\t';
	}
	
}
