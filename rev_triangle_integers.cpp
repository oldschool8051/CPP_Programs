/*
Print the following pattern:
   1
  23
 345
4567
*/

#include<iostream>
using namespace std;

int main()
{
	int n,i=1,j,k;
	cin>>n;
	while(i<=n)
	{
		int val=i; //Taking a variable to store row id value as 'i' increases.
		k=1;
		while(k<=n-i) // We first need to print some space then print the number.
		{
			cout<<" "; //Space printed.
			k++;
		}
		j=1;
		while(j<=i)
		{
			cout<<val; //Numbers getting printed.
			j++;
			val++;
		}
	cout<<endl;
	i++;
}
}

