#include<iostream>
using namespace std;

int main(){
    cout<<"Enter array values: "<<endl;
    int arr[6];
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int temp=0;
        temp=arr[0];
        arr[0]=arr[1];
        arr[1]=arr[2];
        arr[2]=arr[3];
        arr[3]=arr[4];
        arr[4]=arr[5];
        arr[5]=arr[6];
        arr[6]=temp;
    cout<<"After Swapping: ";
        for(int i=0; i<6; i++){
            cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Placing the swapping values to arr1: ";
    int arr1[6];
    for(int i=0; i<6; i++){
        arr1[i]=arr[i];
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
