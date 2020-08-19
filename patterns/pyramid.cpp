/*
Print the following pattern:
   *
  ***
 *****
*******
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	while(i<=n) //Counting the number of rows.
	{
		j=n; // for the space we will consider j to be n to print space as a reverse triangle. 
		while(j>i)
		{
			cout<<" ";
			j--;
		}
		k=1; // Building the star pattern 
		while(k<=2*i-1) // (2*1-1=1,2*2-1=3...)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
		i++;
	}
}
