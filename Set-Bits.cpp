
// Topic:Bitmasking
// You need to find number of set  bits  in  a given number in Complexity  O(no. of set bits)


#include<iostream>
using namespace std;

int countBits(int n){
    int count=0;
    while(n){
        count++;
        n=n & (n-1);
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;
}