//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    vector<int> a;
    while(n > 0){
        a.push_back(n%10);
        n = n/10;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 0){
            a[i] = 5;
        }
    }
    int res = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        res = res*10 + a[i];
    }
    return res;
}