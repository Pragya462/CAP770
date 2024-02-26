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

int countNodes(Node* temp)
{
    int c=0;
    while(temp!= NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}

void insertNode(Node* &head, int val)
{

    Node *newNode = new Node(val);

    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;

    }
}

void display(Node* temp)
{
    while(temp!= NULL)
    {
        cout<<temp->data<<+" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;

    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);

    int count = countNodes(head);
    cout<<"Number of nodes are: "<<count;
}
