// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// functions should slice the given string
// i.e. remove the first and the last character
// of the given string and return the sliced 
// string
string sliceString(string s){
    // code here
    return s.substr(1,s.length()-2);
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    string s; cin>>s;
            
        string slicedString = sliceString(s);
            
        cout<<slicedString<<endl;
	}
	
	return 0;
}  // } Driver Code Ends