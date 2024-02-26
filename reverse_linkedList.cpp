#import <iostream>

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
void insertAtLast(Node* &head, int val)
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

void displayReverse(Node* &head)
{
    Node * temp = head;
    if(temp==NULL)
    {
        return;
    }
    else
    {
        displayReverse(temp->next);
        cout<<temp->data<<+" ";
    }
}

int main()
{
    Node *head =NULL;
    insertAtLast(head, 10);
    insertAtLast(head, 20);
    insertAtLast(head, 30);
    insertAtLast(head, 40);

    display(head);
    cout<<endl;
    displayReverse(head);
}
