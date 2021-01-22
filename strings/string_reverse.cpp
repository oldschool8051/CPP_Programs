#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
  
	int n = s.size();
  
  // Swapping first and last parts of the string uptil mid.
	for(int i=0;i<n/2;i++){
		swap(s[i],s[n-i-1]);
	}
  
  // Finally the output string.
	cout<<s<<endl;
}
