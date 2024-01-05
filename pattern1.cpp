#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<4;i++)
	{
		for(int j=3;j>i;j--)
		{
			cout<<"-";
		}
		for(int k=0;k<=(2*i);k++)
		{
			if(k%2==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<"-";
			}
		}
		cout<<endl;
	}
	return 0;
}
