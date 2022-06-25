// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
        // your code here
        int a[26] = {0};
        for(int i = 0; i < str.length(); i++){
            if(str[i] >= 'a' && str[i] <= 'z'){
                a[str[i] - 'a']++;
            }
            if(str[i] >= 'A' && str[i] <= 'Z'){
                a[str[i] - 'A']++;
            }
        }
        for(int i = 0; i < 26; i++){
            if(a[i] == 0){
                return false;
            }
        }
        return true;
    }

};

// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
  // } Driver Code Ends