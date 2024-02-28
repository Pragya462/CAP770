#include<iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[] = {4,3,2,10,12,1,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    insertionSort(arr, size);

    cout<<endl<<"After sorting: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }


}
