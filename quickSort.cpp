#include<iostream>

using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int pindex = s;

    for(int i=s; i<e; i++)
    {
        if(arr[i] <= pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    int temp = arr[pindex];
    arr[pindex] = arr[e];
    arr[e] = temp;
    return pindex;
}

void quickSort(int arr[], int s, int e)
{
    if(s<e)
    {
        int p = partition(arr, s, e);
        quickSort(arr, s, p-1);
        quickSort(arr, p+1, e);
    }
}

int main()
{
    int arr[] = {23,13,89,56,10,3,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"After sorting: ";
    quickSort(arr, 0, size-1);

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
