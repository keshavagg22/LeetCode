// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void squareWall(int s){
    
    //Write your code here
    for(int i = 0; i < s; i++){
       for(int j = 0; j < s; j++){
           cout<<"* ";
       }
       cout<<endl;
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        squareWall(s);
	}
}  // } Driver Code Ends