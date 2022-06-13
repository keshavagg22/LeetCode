// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
     vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        // Complete the function
        vector<int> v;
        for(int i = 0; i < q; i+=2){
            int x = queries[i];
            int y = queries[i+1];
            int s = 0;
            for(int j = x; j <= y; j++){
                s = s + arr[j];
            }
            v.push_back(s/(y-x+1));
        }
        return v;
    }

};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n + 1],queries[2*q + 1];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<2*q;i++){
            cin>>queries[i];
        }

        vector<int> ans;
        Solution ob;
        ans = ob.findMean(arr,queries,n,2*q);

        for(int i:ans)
            cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}
  // } Driver Code Ends