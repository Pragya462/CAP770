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

void searchElement(Node* temp, int key)
{
    int flag = 0;
    while(temp!= NULL)
    {
        if(key == temp->data)
        {
            flag = 1;
        }
        temp = temp->next;
    }
    if(flag == 1)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
}

int main()
{
    Node* head =NULL;

    int n,val, key;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    cout<<"Enter the values: ";
    for(int i=0; i<n; i++)
    {
        cin>>val;
        insertNode(head, val);
    }

    cout<<"Enter the value to be searched: ";
    cin>>key;
    searchElement(head, key);

}
