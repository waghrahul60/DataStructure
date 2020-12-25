#include<iostream>

using namespace std;

void linearSearch(int a[], int num)
{
    int flag = 1;
    for(int i = 0; i < 5; i++){
        if(num == a[i])
        {
            cout<<"Element Found at Position:"<<i<<endl;
            flag = 0;
        }
    }
      if(flag == 1)
        {
            cout<<"No Element Found "<<endl;
        }
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    cout<<"please enter an element :"<<endl;
    int num;
    cin>>num;
    linearSearch(arr,num);
}