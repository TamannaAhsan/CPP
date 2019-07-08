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
    cout<<"The value I want: "<<endl;
    int y;
    cin>>y;
    for(int i=0; i<x; i++){
        if(arr[i]==y){
            arr[i]=0;
        }
    }
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}


