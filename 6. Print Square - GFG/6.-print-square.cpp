// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void square(int n){
    // code here
    for (int i=0; i<n; i++) {
   cout << "* ";
   for (int j=1; j<n; j++) {
     if (i==0 || i==n-1 || j==n-1) {
         if (j==n-1) {
             cout << "*";
         } else {
             cout << "* ";
         }
     } else {
       cout << "  ";
     }
   }
   cout << "\n";
    }
}


// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        square(n);
    }
    return 0;
}  // } Driver Code Ends