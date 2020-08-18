/* Print the following pattern for the given N number of rows.
Pattern for N = 3
 A
 BB
 CCC
*/

#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{

  int n,i=1;
    cin>>n;
    while(i<=n) //Counting the number of rows.
    {   
        int j=1;
        while(j<=i)
        {
            char a='A'+i-1; //Taking ASCII value of A and doing mathematical operations.
            cout<<a;
            j++;
        }
        cout<<endl;
        i++;
    }

}
