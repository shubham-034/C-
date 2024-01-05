#include<iostream>
using namespace std;
int main()
{
	int n;
	xyz:
		cout<<"Enter Your Age ----> ";
		cin>>n;
		if(n<18)
		{
			cout<<"Not Eligible For Voting"<<'\n';
			goto xyz;
		}
		else
		{
			cout<<"Eligible For Voting";
	
		}
	return 0;
}
