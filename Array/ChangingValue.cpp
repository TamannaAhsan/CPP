#include<iostream>
using namespace std;

int main(){

    cout<<"Enter array size: "<<endl;
    int x;
    cin>>x;
    cout<<"Enter array values: "<<endl;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    cout<<"The value I want to change: "<<endl;
    int y;
    cin>>y;
    cout<<"Enter your new value: "<<endl;
    int u;
    cin>>u;
    for(int i=0; i<x; i++){
        if(arr[i]==y){
            arr[i]=u;
        }
    }
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}


