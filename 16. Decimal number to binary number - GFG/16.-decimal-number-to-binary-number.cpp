// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void toBinary(string N)
{
    // your code here
    int n = 0;
    int y = 1;
    for(int i = 0; i < N.length(); i++){
        n = n + (y*int(N[N.length()-1-i] - '0'));
        y = y*10;
    }
    string s = "";
    while(n>0){
        s = to_string(n%2) + s;
        n = n/2;
    }
    cout<<s;
        
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    string n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends