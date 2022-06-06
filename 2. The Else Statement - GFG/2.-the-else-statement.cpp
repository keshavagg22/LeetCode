// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int number){
    
    //Write your if-else statement below
    if(number > 100){
        cout<<"Big"<<"\n";
    }
    else{
        cout<<"Number"<<"\n";
    }
    
    //Write your if-else statement above
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t-- > 0) {
        int number; cin>>number;
        utility(number);
	}
	
}  // } Driver Code Ends