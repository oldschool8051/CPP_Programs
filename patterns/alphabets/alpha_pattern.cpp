/*
Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
*/
 
#include <iostream>
using namespace std;

int main()
{

  int n,i=1;
    cin>>n;
    while(i<=n)
    {   
        int j=1;
        while(j<=i)
        {
            char a='A'+i-1; // Since we are manipulating with rows hence we are taking 'i' for the calculation of rows.
            cout<<a;
            j++;
        }
        cout<<endl;
        i++;
    }

}
