// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

vector<vector<int>> evenOdd(vector<int> numbers){
    vector<int> e;
    vector<int> o;
    for(int x: numbers){
        if(x%2 == 0){
            e.push_back(x);
        }
        else{
            o.push_back(x);
        }
    }
    vector<vector<int>> v {e,o};
    return v;
    //code here
    
}

// { Driver Code Starts.

int main(){
    int t; cin>>t;
        
    while (t--){
            int n; cin>>n;
        
            vector<int> numbers;
            int a;
            for(int i = 0;i < n;i++){
                cin>>a;
                numbers.push_back(a);
            }
            
            vector<vector<int>> ans = evenOdd(numbers);
            
            for(int i = 0; i < ans[0].size(); i++){
                cout << ans[0][i] << " ";
            }
            
            cout<<endl;
            
            for(int i = 0; i < ans[1].size(); i++){
                cout << ans[1][i] << " ";
            }
            cout<<endl;
        }
    
    return 0;
}  // } Driver Code Ends