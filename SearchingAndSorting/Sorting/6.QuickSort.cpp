#include <iostream>

using namespace std;

int partition(int arr[],int start,int end);

void quickSort(int arr[], int start,int end)
{
    if(start<end)
    {
        int p = partition(arr, start, end);
        quickSort(arr,start,(p-1)); //left
        quickSort(arr,(p+1),end);//right
    }
}

int partition(int arr[],int start,int end)
{
    int pivot = arr[end];
    int pindex = start;
    for (int i = start; i < end; i++)
    {
        if(arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    int temp = arr[end];
    arr[end] = arr[pindex];
    arr[pindex] = temp;
    return pindex;
}

int main()
{
    int myArray[5] = {22, 11, 33, 44, 55};
    int size =5;
    // cout<<"Enter 5 Elements : "<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<myArray[i]<<" ";
    // }

    cout << "Before Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout<<endl;
    

    quickSort(myArray,0,4);//size-1

    cout << "After Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}