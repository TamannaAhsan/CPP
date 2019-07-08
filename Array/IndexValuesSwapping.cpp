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
    cout<<"Two index values: "<<endl;
    int a,b;
    cin>>a>>b;
    int temp=0;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;

     for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}

