#include<iostream>
using namespace std;

int main(){

    cout<<"Enter array values: "<<endl;
    int arr1[6];
    for(int i=0; i<6; i++){
        cin>>arr1[i];
    }

    int arr2[6];
    for(int i=0; i<6; i++){
        arr2[i]=arr1[i]-1;
    }

    int arr3[6];
    for(int i=0; i<6; i++){
        arr3[i]=arr2[i]+3;
    }
    for(int i=0; i<6; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<6; i++){
        cout<<arr3[i]<<" ";
    }


}
