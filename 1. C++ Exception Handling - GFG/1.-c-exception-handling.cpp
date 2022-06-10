// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxValue(int A, int B){
        // code here
        try
   {
       if(B==0)
           throw -999999;
       else
       {
           int array[]={A+B,A-B,A*B,A/B};
           int max=array[0];
           for(int i=1;i<4;i++)
           {
               if(array[i]>max)
               {
                   max=array[i];
               }
           }
           return max;
       }
   }
   catch(int x)
   {
       return x;
   }
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        
        Solution ob;
        int ans = ob.maxValue(A,B);
        if(ans == -999999)
            cout<<"inf\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}  // } Driver Code Ends