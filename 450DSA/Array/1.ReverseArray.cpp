#include<bits/stdc++.h>

using namespace std;


void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
void reverseArray(int arr[],int start, int end){
    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


void reverse(int arr[], int n)
{
    reverse(arr, arr + n);
}

int main(){
    int arr[] ={10,20,30,40,50};
    int n = sizeof(arr) /sizeof(arr[0]);

    printArray(arr,n);

   // reverseArray(arr,0,n-1);
    reverse(arr,n);

    cout<<"reverse Array is :"<< endl;
    printArray(arr,n);

    return 0;

}