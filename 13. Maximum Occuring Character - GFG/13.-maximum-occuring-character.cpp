// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int a[256] = {0};
        for(int i = 0; i < str.length(); i++){
            a[str[i]]++;
        }
        int max = INT_MIN;
        int x = 0;
        for(int i = 0; i < 256; i++){
            if(a[i] > max){
                max = a[i];
                x = i;
            }
        }
        return char(x);
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends