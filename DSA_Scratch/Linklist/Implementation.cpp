#include <bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void Print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

Node *  reverse(Node *head){
    Node * curr =head;
    Node * prev =nullptr;
    Node *temp =nullptr;

    while(curr!=nullptr){
        temp =curr->next;
        curr->next =prev;
        prev =curr;
        curr =temp;
    }
    return prev;
}

int main()
{
    // dynamic memory allocation.
    Node *x = new Node(10); 
    Node *y = new Node(25);
    Node *z = new Node(23);

    x->next = y;
    y->next = z;

    Print(x);

    // static memory location.
    Node m = Node(1);
    Node n = Node(10);
    Node o = Node(18);

    m.next = &n;
    n.next = &o;


    Node * rev = reverse(x);
    Print(x);
}
