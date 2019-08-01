#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    int maxIndex=0;
    int minIndex=0;
    int maximum=arr[0];
    int minimum=arr[0];

    for(int i=0; i<x; i++){
        if(maximum<arr[i]){
            maximum=arr[i];
            maxIndex = i;
        }
        if(minimum>arr[i]){
            minimum=arr[i];
            minIndex=i;
        }
    }
    arr[maxIndex]=0;
    arr[minIndex]=-1;
    for(int i=0; i<x; i++){
        cout<<arr[i]<<" ";
    }
}
