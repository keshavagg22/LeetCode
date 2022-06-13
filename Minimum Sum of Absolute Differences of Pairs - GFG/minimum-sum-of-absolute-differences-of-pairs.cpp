// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(&A[0],&A[0]+N);
        sort(&B[0],&B[0]+N);
        long long x = 0;
        for(int i = 0; i < N; i++){
            if(A[i] >= B[i]){
                x+=(A[i]-B[i]);
            }
            else{
                x+=(B[i]-A[i]);
            }
        }
        return x;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> A(N),B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
            cin>>B[i];
        }
        Solution ob;
        cout<<ob.findMinSum(A,B,N)<<endl;
    }
}  // } Driver Code Ends