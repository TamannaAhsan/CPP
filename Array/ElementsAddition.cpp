#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr1[x];
    for(int i=0; i<x; i++){
        cin>>arr1[i];
    }
    int arr2[x];
    arr2[0]=arr1[0];
    for(int i=0; i<x; i++){
         arr2[i+1]=arr1[i]+arr1[i+1];
    }
    for(int i=0; i<x; i++){
        cout<<arr2[i]<<" ";
    }
}
