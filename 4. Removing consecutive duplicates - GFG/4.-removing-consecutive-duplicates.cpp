// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        // Your code here
        stack<char> x;
        for(int i = 0; i < s.length(); i++){
            if(x.empty()){
                x.push(s[i]);
            }
            else if(x.top() != s[i]){
                x.push(s[i]);
            }
        }
        string res = "";
        while(x.empty() == false){
            res = x.top() + res;
            x.pop();
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends