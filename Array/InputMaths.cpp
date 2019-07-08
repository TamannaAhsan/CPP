#include<iostream>
using namespace std;

int main(){

    cout<<"Enter array first element: "<<endl;
    int arr[6];
    cin>>arr[0];
    for(int i=0; i<6; i++){
        arr[i+1]=arr[i]*5;
    }
     for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<6; i++){
        arr[i+1]=arr[i]/5;
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}
