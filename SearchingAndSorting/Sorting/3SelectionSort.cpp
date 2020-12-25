#include<iostream>

using namespace std;


void selectionSort(int arr[])
{
    for(int i =0; i<5-1; i++)
    {
        int min = i;
        for (int j = i+1; j < 5; j++)
        {
            if (arr[j] < arr[min]) //> for desc
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp; 
        }
    }
}


int main()
{
    int myArr[5] = {11,77,33,99,55};

    cout<<"Unsorted array : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<myArr[i]<<" ";
    }
    cout<<endl;

    selectionSort(myArr);

    cout<<"Sorted array : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<myArr[i]<<" ";
    }
    cout<<endl;

    return 0;
}