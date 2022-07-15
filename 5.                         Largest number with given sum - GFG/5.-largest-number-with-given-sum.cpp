// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        string res="";
       if(9*n<sum)
       return "-1";
       else
       {
           int count=sum/9;
           for(int i=0;i<count;i+=1)
            res+='9';
           if(count<n)
           res+=to_string(sum%9);
           count+=1;
           while(count<n)
           {
               res+='0';
               count+=1;
           }
           return res;
       }
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends