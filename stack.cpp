#include<iostream>
# define size 10

using namespace std;

class Stack
{
private:
    int top;
    int arr[size];

    public:
    Stack()
    {
        top = -1;
        for(int i=0; i<size; i++)
        {
            arr[i] = 0;
        }
    }

    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            int val = arr[top];
            arr[top] = 0;
            top--;
            cout<<"Popped element is: "<<val<<endl;
        }
    }

    void display()
    {
        for(int i=0; i<=top; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Peak value is: "<<arr[top]<<endl;
        }
    }

    int count()
    {
        return top+1;
    }

    void change(int pos, int val)
    {
        if(pos>top)
        {
            cout<<"Invalid Index"<<endl;
        }
        else
        {
            arr[pos] = val;
        }
    }

};

int main()
{
    Stack obj;
    int val,pos;

    cout<<"Enter 1 to push an element"<<endl;
    cout<<"Enter 2 to pop an element"<<endl;
    cout<<"Enter 3 to peek an element"<<endl;
    cout<<"Enter 4 to count the elements"<<endl;
    cout<<"Enter 5 to change an element"<<endl;
    cout<<"Enter 6 to display the elements"<<endl;
    cout<<"Enter 7 to exit"<<endl;
    int ch;
    while(true)
    {
        cout<<"Enter your choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter the element: ";
            cin>>val;
            obj.push(val);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.peek();
            break;
        case 4:
            cout<<"Number of elements in stack are: "<<obj.count()<<endl;
            break;
        case 5:
            cout<<"Enter the index: ";
            cin>>pos;
            cout<<"Enter the value: ";
            cin>>val;
            obj.change(pos-1, val);
            break;
        case 6:
            obj.display();
            break;
        case 7:
            exit(0);
        default:
            cout<<"Invalid choice"<<endl;

        }
    }

}
