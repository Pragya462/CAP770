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

void changeValue(Node* temp, int val, int new_val)
{
    while(temp!= NULL)
    {
        if(temp->data == val)
        {
            temp->data = new_val;
            break;
        }

        temp = temp->next;
    }
}

void insertAtStart(Node* &head, int val)
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

void insertAtIndex(Node* &head, int val, int ind)
{
    Node* newNode = new Node(val);

    Node* temp = head;

    if(ind==1)
    {
        insertAtStart(head, val);
    }
    else
    {
        for(int i=1; i<ind-1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteFirst(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Underflow";
    }
    else if(head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteLast(Node* &head)
{
    if(head == NULL)
    {
        cout<<"Underflow";
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        Node* temp=head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
}

void deleteSpecific(Node* &head, int pos)
{
    if(head == NULL)
    {
        cout<<"Underflow";
    }
    else
    {
        if(pos==1)
        {
            deleteFirst(head);
        }
        else
        {
            Node* curr = head;
            Node* temp = head->next;
            int c=1;

            while(c<pos-1)
            {
                curr=curr->next;
                temp=temp->next;
                if(curr->next == NULL)
                {
                    cout<<"Invalid Index";
                    return;
                }
                c++;
            }
            curr->next=temp->next;
            free(temp);
        }
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

    int val,ind;

    int ch;

    cout<<"Enter 1 to create the linked list"<<endl;
        cout<<"Enter 2 to add a node in the beginning of the linked list"<<endl;
        cout<<"Enter 3 to add a node to a specific index in linked list"<<endl;
        cout<<"Enter 4 to append a node to the linked list"<<endl;
        cout<<"Enter 5 to delete a node from the beginning of the linked list"<<endl;
        cout<<"Enter 6 to delete a node to from the end of the linked list"<<endl;
        cout<<"Enter 7 to delete a node from the specified index of the linked list"<<endl;
        cout<<"Enter 8 to display the linked list"<<endl;
        cout<<"Enter 9 to exit"<<endl<<endl;

    do
    {

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>val;
            insertAtLast(head, val);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>val;
            insertAtStart(head, val);
            break;
        case 3:
            cout<<"Enter the index: ";
            cin>>ind;
            cout<<"Enter the value: ";
            cin>>val;
            insertAtIndex(head, val, ind);
            break;
        case 4:
            cout<<"Enter the value: ";
            cin>>val;
            insertAtLast(head, val);
            break;
        case 5:
            deleteFirst(head);
            cout<<"First Node deleted successfully";
            break;
        case 6:
            deleteLast(head);
            cout<<"Last node deleted successfully";
            break;
        case 7:
            cout<<"Enter the index: ";
            cin>>ind;
            deleteSpecific(head, ind);
            break;
        case 8:
            display(head);
            break;
        case 9:
            exit(0);
            break;
        default:
            cout<<"Invalid choice";
        }
    }while(true);
}
