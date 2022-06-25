// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length() != str2.length()){
            return false;
        }
        string s1 = "";
        string s2 = "";
        s1 += str1.substr(2,str1.length());
        s1 += str1.substr(0,2);
        s2 += str1.substr(str1.length()-2,str1.length());
        s2 += str1.substr(0,str1.length()-2);
        if(str2 == s1 || str2 == s2){
            return true;
        }
        return false;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends