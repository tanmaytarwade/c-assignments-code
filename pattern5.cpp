//pattern
#include <iostream>
using namespace std;
main()
{
	int n;
	cout<<"enter the number";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=i;k++)
		{
			cout<<" * ";
		}
		cout<<"\n";
	}
	for(int i =1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int k=n;k>=i;k--)
		{
			cout<<" * ";
		}
		cout<<"\n";
	}
}