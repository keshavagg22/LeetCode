// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int sum=0;
        int num=0;
    
        for( int i=0 ; i<str.length(); i++)
        {
           
            if( 48 <= int(str[i]) && int(str[i])<=57)
            {
                num=num*10+ ( int(str[i])-48);
            }
            else
            {
                sum =sum+ num;
                num=0;
            }
        }
        sum=sum+num;
        
        return sum;
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends