#include<iostream>

using namespace std;

void insertionSort(int arr[])
{
    int i, key =0;
    int j = 0;
    for(int i=1;i<10;i++)
    {
        key = arr[i];
        j = i-1;


        for ( ; j>=0 && arr[j]>=key;)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        
    }
}


int main()
{
    int myArray[10]={35,33,42,10,14,19,27,44,26,31};
    cout<<"Unsorted Array is : ";
    for(int i =0;i<10;i++)
    {
        cout<<myArray[i]<<" ";
    }
    cout<<"=============="<<endl;
    insertionSort(myArray);
    cout<<"Sorted Array is : ";
    for(int i =0;i<10;i++)
    {
        cout<<myArray[i]<<" ";
    }
    return 0;
}