// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int len = S.size();
       reverse(S.begin(),S.end());
       int prev=-1;
       for(int i=0;i<len;i++){
           if(i==len-1){
               reverse(S.begin()+prev+1,S.end());
           }
           if(S[i]=='.'){
               reverse(S.begin()+prev+1,S.begin()+i);
               prev=i;
           }else{
               continue;
           }
       }
       return S;

    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends