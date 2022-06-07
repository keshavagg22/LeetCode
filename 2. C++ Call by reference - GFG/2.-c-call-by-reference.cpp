// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int x = 0;
    while(a > 0){
        x = x*10 + (a%10);
        a = a/10;
    }
    int y = 0;
    while(b > 0){
        y = y*10 + (b%10);
        b = b/10;
    }
    a = x;
    b = y;
}
void swap(int &a,int &b)
{
    //Add your code here.
    int c = a;
    a = b;
    b = c;
}


// { Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}  // } Driver Code Ends