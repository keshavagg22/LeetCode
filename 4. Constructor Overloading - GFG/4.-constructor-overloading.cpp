// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// design a class with two constructor
// one default, the other parameterized
class User{
  public:
  string name;
  User(){
      name = "Default";
  }
  User(string name1){
      name = name1;
  }
};
// code here

// { Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    string name; getline(cin, name);
    while(t--)
    {
        User user;
        cout<<user.name<<endl;
        string name; getline(cin, name);
        User user2(name);
        cout<<user2.name<<endl;
    }
    return 0;
}
  // } Driver Code Ends