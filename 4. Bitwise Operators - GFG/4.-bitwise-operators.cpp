// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int a, int b, int c){
    //Do a^a below
    int d= a ^ a;
    //Do c^b below
    int e= c ^ b;
    //Do a&b below
    int f= a & b;
    //Do c|(a^a) below
    int g=c | (a ^ a);
    //Do ~e below
    e= ~e;

     //The line below prints the output. Don't change it!
    cout << d << " " << e << " " << f << " " << g <<endl;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        utility(a, b, c);
    }
	
}  // } Driver Code Ends