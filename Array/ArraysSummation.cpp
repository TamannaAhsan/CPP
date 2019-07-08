#include<iostream>
using namespace std;

int main(){
    cout<<"Enter array values: "<<endl;
    int arr1[6];
    for(int i=0; i<6; i++){
        cin>>arr1[i];
    }

    float arr2[6];
    for(int i=0; i<6; i++){
        cin>>arr2[i];
    }

    float arr3[6];
    for(int i=0; i<6; i++){
       arr3[i]=arr1[i]+arr2[i];
    }

    for(int i=0; i<6; i++){
        cout<<arr3[i]<<" ";
    }
}

