/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;


int main()
{

 
    int n,i=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        char c='A'+i-1; 
        while(j<=i)
        {
            cout<<c;
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
  
}
