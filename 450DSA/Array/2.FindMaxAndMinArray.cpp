#include<bits/stdc++.h>

using namespace std;


void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
void maxElement(int arr[],int n,int max){
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
}

void minElement(int arr[],int n,int min){
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
}



int main(){
    int arr[] ={10,20,30,40,50};
    int n = sizeof(arr) /sizeof(arr[0]);

    printArray(arr,n);
    int a = arr[0];
    maxElement(arr,n,a);

    minElement(arr,n,a);

    return 0;

}