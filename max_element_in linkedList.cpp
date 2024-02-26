#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertNode(Node* &head, int val)
{

    Node *newNode = new Node(val);

    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void maxElement(Node* temp)
{
    int max = temp->data;
    while(temp!= NULL)
    {
        if(max < temp->data)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    cout<<max;
}

int main()
{
    Node* head =NULL;

    int n,val;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    cout<<"Enter the values: ";
    for(int i=0; i<n; i++)
    {
        cin>>val;
        insertNode(head, val);
    }

    maxElement(head);
}
