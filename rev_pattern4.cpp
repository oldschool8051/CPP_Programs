#include<iostream>
using namespace std;

int main()
{
	int n,i=1,j,k;
	cin>>n;
	while(i<=n)
	{
		int val=i;
		k=1;
		while(k<=n-i)
		{
			cout<<" ";
			k++;
		}
		j=1;
		while(j<=i)
		{
			cout<<val;
			j++;
			val++;
		}
	cout<<endl;
	i++;
}
}

