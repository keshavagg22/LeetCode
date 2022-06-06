// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int number){
    //Write the if, else if, else statements below
    if(number > 100){
        cout<<"Big\n";
    }
    else if(number < 10){
        cout<<"Small\n";
    }
    else{
        cout<<"Number\n";
    }
    
    
    
    
    //Write the if, else if, else statements above
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int number; cin>>number;
        utility(number);
	}
	
}  // } Driver Code Ends