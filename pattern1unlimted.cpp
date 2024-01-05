#include<iostream>
using namespace std;
void pattern(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=0;k<=(2*i);k++)
		{
			if(k%2==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter The No Of Rows In Star Pattern ";
	cin>>n;
	pattern(n);
	return 0;
}
