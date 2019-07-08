#include<iostream>
using namespace std;

int main(){

    cout<<"Enter array elements: "<<endl;
    int arr1[6];
    for(int i=0; i<6; i++){
        cin>>arr1[i];
    }
    cout<<endl;
    int arr2[6];
    for(int i=0; i<6; i++){
        arr2[i]=arr1[i];
    }
    for(int i=0; i<6; i++){
        cout<<arr2[i]<<" ";
    }
}
