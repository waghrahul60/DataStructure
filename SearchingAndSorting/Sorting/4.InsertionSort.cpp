#include<iostream>

using namespace std;

void insertionSort(int arr[])
{
    int i,key=0;
    int j=0;
    for (int i = 1; i < 5; i++)
    {
        key = arr[i];
        j = i - 1;
        // while(j >= 0 && arr[j]>key){
        //     arr[j+1] = arr[j];
        //     j = j-1;
        // }
        for(;j >= 0 && arr[j]>key;){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}


int main()
{
    int myArray[5] = {11,77,55,33,66};
     cout << "Before Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout<<endl;
    
    insertionSort(myArray);

    cout << "After Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }

    return 0;
}