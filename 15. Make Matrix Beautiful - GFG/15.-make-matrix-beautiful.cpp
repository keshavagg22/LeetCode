// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int c1 = INT_MIN;
        int c2 = INT_MIN;
        int row[n] = {0};
        for(int i = 0; i < n; i++){
            int s1 = 0;
            int s2 = 0;
            for(int j = 0; j < n; j++){
                s1 += matrix[i][j];
                s2 += matrix[j][i];
            }
            row[i] = s1;
            c1 = max(c1,s1);
            c2 = max(c2,s2);
        }
        int m = max(c1,c2);
        int res = 0;
        for(int i = 0; i < n; i++){
            res += (m - row[i]);
        }
        return res;
    } 
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}

  // } Driver Code Ends