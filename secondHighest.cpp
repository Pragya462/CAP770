#include<iostream>
#include <limits.h>

using namespace std;

int main()
{
    int arr[] = {-12, -45 , 36, -99, 38, 20};

    int size = sizeof(arr)/ sizeof(arr[0]);

    int max = INT_MIN;

    for(int i=0; i<size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int sec_max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > sec_max && arr[i] != max)
            sec_max = arr[i];
    }

    cout<<sec_max;
}
