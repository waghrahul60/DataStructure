#include <iostream>

using namespace std;

void bubbleSort(int a[])
{
    for (int i = 0; i < 5; i++)
    {
        bool flag = false;
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                flag = true;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if(flag==false){
            break;
        }
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

    cout << "Before Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout<<endl;
    

    bubbleSort(myArray);

    cout << "After Sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}