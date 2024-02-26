#include<iostream>
#define SIZE 10

using namespace std;

void insertElement(int arr[], int pos, int *n, int val)
{
    for(int i=*n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    *n=*n+1;
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[SIZE] = {12, 34, 90, 25, 32, 11, 36};

    int pos, val, n = 7;
    display(arr, n);

    cout<<endl<<"Enter the index: ";
    cin>>pos;
    pos = pos - 1;
    if(n+1 >= 10)
    {
        cout<<"Overflow";
    }
    else
    {
        if(pos>=9)
        {
            cout<<"Invalid Index";
        }
        else
        {
            cout<<"Enter the value: ";
            cin>>val;
            insertElement(arr, pos, &n, val);

            display(arr, n);
        }
    }
}
