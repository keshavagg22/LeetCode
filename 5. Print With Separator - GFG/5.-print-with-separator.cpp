// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(string a, string b, string separator){

    //code here
    cout<<a<<separator<<b<<"\n";
}

// { Driver Code Starts.

int main()
{
    int t; cin>>t;
    while(t--){
        string a, b, separator;
        cin>>a>>b>>separator;
        utility(a, b, separator);
    }
}  // } Driver Code Ends