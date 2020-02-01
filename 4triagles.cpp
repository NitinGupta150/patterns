#include<iostream>
using namespace std;
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		cout<<"\n";
		for(j=1;j<=i;j++)
			cout<<"*";
		for(j=1;j<=sp;j++)
			cout<<" ";
		for(j=i;j>=1;j--)
			cout<<"*";
		sp=sp-2;
	}
	sp=sp+2;
	for(int i=5;i>=1;i--)
	{
		cout<<"\n";
		for(j=1;j<=i;j++)
			cout<<"*";
		for(j=1;j<=sp;j++)
			cout<<" ";
		for(j=i;j>=1;j--)
			cout<<"*";
		sp=sp+2;
	}
}
