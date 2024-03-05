#include<iostream>
#define size 10

using namespace std;

class Queue
{
    public:
    int arr[size];
    int front =-1, rear = -1;

    void enqueue(int val)
    {
        if(rear == size-1)
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    void dequeue()
    {
        if(front==rear || front == size-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            int temp;
            front++;
            if(front == rear)
            {
                temp = arr[front];
                front = rear = -1;
            }
            else
            {
                temp = arr[front];
            }

            cout<<"Value deleted is: "<<temp<<endl;
        }
    }

    void display()
    {
        for(int i=front+1; i<=rear; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};



int main()
{
    Queue obj;
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);
    obj.enqueue(50);
    obj.enqueue(60);
    obj.display();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);
    obj.enqueue(50);
    obj.enqueue(60);
    obj.display();
}
