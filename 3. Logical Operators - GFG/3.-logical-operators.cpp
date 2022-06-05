// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(bool a, bool b){
    //Do a AND b below
    bool p = a && b;
    //Do a OR b below
    bool q = a ||b;
    //Do NOT a below
    bool r = !a;

    cout<< boolalpha << p << " " << q << " " << r << endl;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        bool a, b;
        cin>>a>>b;
        utility(a, b);
    }
	
}

  // } Driver Code Ends