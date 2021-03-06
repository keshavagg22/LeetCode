// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> v;
        int a = 0, b = 0;
        while(a < r && b < c){
            for(int i = b; i < c; i++){
                v.push_back(matrix[a][i]);
            }
            a++;
            for(int i = a; i < r; i++){
                v.push_back(matrix[i][c-1]);
            }
            c--;
            if(a < r){
                for(int i = c-1; i >= b; i--){
                    v.push_back(matrix[r-1][i]);
                }
                r--;
            }
            if(b < c){
                for(int i = r-1; i >= a; i--){
                    v.push_back(matrix[i][b]);
                }
                b++;
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends