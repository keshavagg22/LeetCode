// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
   {
       // code here
       // return head of reversed list
       struct Node *next,*prev,*current;
       prev=NULL;
       current =head;
       while(current!=NULL)
       {
           next=current->next;
           current ->next=prev;
           prev=current;
           current=next;
           
       }
       head=prev;
       return head;
   }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverseList(first);
        second = reverseList(second);
        Node *f = first, *s = second, *temp1, *temp2;
        int carry = 0;
        while(first && second){
            int temp = (first->data + second->data + carry);
            first->data = temp%10;
            second->data = temp%10;
            carry = temp/10;
            temp1 = first;
            temp2 = second;
            first = first->next;
            second = second->next;
        }
        if(first){
            while(carry && first){
                int temp = (first->data  + carry);
                first->data = temp%10;
                carry = temp/10;
                temp1 = first;
                first = first->next;
            }
            if(carry){
                temp1->next = new Node(carry);
            }
            return reverseList(f);
        }
        else{
            while(carry && second){
                int temp = (second->data  + carry);
                second->data = temp%10;
                carry = temp/10;
                temp2 = second;
                second = second->next;
            }
            if(carry){
                temp2->next = new Node(carry);
            }
            return reverseList(s);
        }
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends