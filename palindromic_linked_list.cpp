#include<iostream>
#include<stack>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
int main()
{
    stack<int> stack;
    int flag =1;
    Node* head = NULL;
    Node* one = new Node(2);
    Node* two = new Node(4);
    Node* three = new Node(3);
    Node* four = new Node(4);
    Node* five = new Node(2);

    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;

    Node* temp = head;
    while(temp != NULL)
    {
        stack.push(temp->data);
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    Node* temp1=head;
    while(temp1 != NULL)
    {
        int i = stack.top();
        stack.pop();
        if(temp1->data != i)
        {
            flag = 0;
            break;
        }
        temp1=temp1->next;
    }

    if(flag == 0)
    {
        cout<<"Not palindrome"<<endl;
    }
    else
    {
        cout<<"Palindrome"<<endl;
    }
}
