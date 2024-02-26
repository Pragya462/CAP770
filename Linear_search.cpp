#include<iostream>


using namespace std;

void searchForward(int arr[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at index "<<i;
        }
    }
}

void searchBackward(int arr[], int n, int key)
{
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]==key)
        {
            cout<<"Element found at index "<<i;
        }
    }
}

void searchBothward(int arr[], int n, int key)
{
    int s=0,e=n-1;

    while(s<=e)
    {
        if(arr[s]==key)
        {
            cout<<"Element found at index "<<s;
            break;
        }
        else if(arr[e]==key)
        {
            cout<<"Element found at index "<<e;
            break;
        }
        else
        {
            s++;
            e--;
        }
    }
}

int main()
{
    int arr[] = {12,34,39,48,59,29};
    int n=6;

    int key;
    cout<<"Enter the element: ";
    cin>>key;

    searchBothward(arr, n, key);
}
