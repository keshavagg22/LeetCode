// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int y){
    string isLeap = "False";

    //Your code below
    //Assign True or False to isLeap
    if(y%4 == 0 && y%100 != 0){
        isLeap = "True";
    }
    else if(y%400 == 0){
        isLeap = "True";
    }
    else{
        isLeap = "False";
    }
    //Your code above
    
    //The line below prints the output
    cout<<isLeap<<endl;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int y; cin>>y;
        utility(y);
	}
	
}  // } Driver Code Ends