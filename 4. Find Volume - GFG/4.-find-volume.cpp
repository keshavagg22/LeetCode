// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

// Write the first function to
// return the volume of cube
int volume(int a){
    return a*a*a;
}
int volume(int l, int b, int h){
    return l*b*h;
}
// Write the second function to
// return the volume of the rectangular box


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        switch (q) {
            case 1:
                int edge;
                cin >> edge;
                cout << volume(edge);
                break;

            case 2:
                int length, width, height;
                cin >> length >> width >> height;
                cout << volume(length, width, height);
                break;
        }
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends