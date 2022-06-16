// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int lsum[n], rsum[n];
        lsum[0] = 0;
        rsum[n-1] = 0;
        for(int i = 1; i < n; i++){
            lsum[i] = lsum[i-1] + a[i-1];
        }
        for(int i = n-2; i >= 0; i--){
            rsum[i] = rsum[i+1] + a[i+1];
        }
        for(int i = 0; i < n; i++){
            if(lsum[i] == rsum[i]){
                return i + 1;
            }
        }
        return -1;
        // Your code here
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends