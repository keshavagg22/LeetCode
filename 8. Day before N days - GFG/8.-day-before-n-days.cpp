// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int d, int n){
    
    //write your code here
   int x = n % 7;
   int y = d - x;
   if(y < 0){
       cout<<(y+7);
   }
   else{
       cout<<y;
   }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t-- > 0) {
        int d, n;
        cin>>d>>n;
        utility(d, n);
        cout<<endl;
    }
	
}  // } Driver Code Ends