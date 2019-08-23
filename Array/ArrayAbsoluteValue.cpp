#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
        if(arr[i]<0)
            cout<<arr[i]*(-1)<<" ";
        else
            cout<<arr[i]<<" ";
    }
}
