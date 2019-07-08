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
    cout<<"The Index I want: "<<endl;
    int y;
    cin>>y;
    arr[y]=0;
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}

