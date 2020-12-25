#include<iostream>

using namespace std;

void binarySearch(int arr[],int N,int item)
{
    int lower = 0;
    int upper = N-1;
    while (lower < upper)
    {
        int m = (lower + upper)/2;
        if(item == arr[m]){
            cout<<"Searech Succesful at index no : "<<m<<endl;
            return;
        } else if(item>arr[m])
        {
            lower = m+1;
        }else
        {
            upper = m-1;
        }
       
    }
    cout<<"Searech Element Not Found ";
     
}



main()
{
    int arr[] = {11,22,33,44,55,66,77,88,99};
    binarySearch(arr,8,66);
}