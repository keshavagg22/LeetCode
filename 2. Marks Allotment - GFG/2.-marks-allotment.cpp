// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int marks(int A){
        // code here
        try{
            if(A > 100 || A < 0){
                return -1;
            }
            else{
                return A;
            }
        }
        catch(int x){
            return x;
        }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A;
        cin>>A;
        
        Solution ob;
        int ans = ob.marks(A);
        
        cout<<ans<<"\n";
    }
    return 0;
}  // } Driver Code Ends