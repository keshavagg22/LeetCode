// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int x = 0;
        int y = 1;
        for(int i = 0; i < str.length(); i++){
            x = x + (y*int(str[str.length()-1-i] - '0'));
            y = y*2;
        }
        return x;
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends