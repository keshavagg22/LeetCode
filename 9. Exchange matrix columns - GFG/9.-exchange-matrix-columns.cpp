// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
void exchangeColumns(vector<vector<int> > &matrix);

 // } Driver Code Ends


class Solution
{
    public:
    //Function to exchange first column of a matrix with its last column.
    void exchangeColumns(vector<vector<int> > &matrix)
    {
        // code here
        for(int i = 0; i < matrix.size(); i++){
            swap(matrix[i][0],matrix[i][matrix[0].size()-1]);
        }
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n1, m1;
    	cin >> n1 >> m1;
    	vector< vector<int>> matrix(n1, vector<int> (m1));
    	for(int i = 0; i < n1; i++){
    		for(int j = 0; j < m1; j++){
    			cin >> matrix[i][j];
    		}
    	}
    	Solution obj;
    	obj.exchangeColumns(matrix);
    	for(int i = 0; i < n1; i++){
    		for(int j = 0; j < m1; j++){
    			cout << matrix[i][j] << ' ';
    		}
    	}
    	cout << endl;
    }
	return 0;
}  // } Driver Code Ends