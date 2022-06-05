// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int a, int b, int c, int d){
    //Complete the code above that stores the output of the expression
    int res = ((a + b)/c) + d;
    //Complete the code above that stores the output of the expression
    
    //This prints the output. Don't change it!
    cout << res << endl;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        int a, b, c , d;
        cin>>a>>b>>c>>d;
        utility(a, b, c, d);
    }
	
}  // } Driver Code Ends