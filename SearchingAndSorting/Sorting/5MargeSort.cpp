#include <iostream>

using namespace std;

void marge(int arr[], int left, int mid, int right)
{
    int i = left; // Starting Index for Left subarray
    int j = mid + 1;
    int k = left;

    int temp[5];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else // (arr[i] >= arr[j])
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        j++;
    }
    while (j <= right)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }
    for (int p = left; p <= right; p++)
    {
        arr[p] = temp[p];
    }
}

//Merge Sort Function
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        marge(arr, left, mid, right);
    }
}

int main()
{
    int myArray[5] = {22, 11, 33, 44, 55};
    // cout<<"Enter 5 Elements : "<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<myArray[i]<<" ";
    // }

    cout << "Before Merge Sort :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    mergeSort(myArray, 0, 4);

    cout << "After Merge Sort : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}