// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

void precise(float a, float b)
{
    //code here
    float x = float(a)/float(b);
    cout<<x<<" ";
    cout<<std::fixed;
    cout<<std::setprecision(3);
    cout<<x;
   
}

// { Driver Code Starts.
void precise(float , float );


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b; 
	    precise(a,b);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends