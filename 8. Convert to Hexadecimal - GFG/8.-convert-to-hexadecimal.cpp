// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void decTohex(int a) {
    cout<<std::hex;
    cout<<a;
    // code here
}

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;
        decTohex(a);
        cout << endl;
    }
}  // } Driver Code Ends