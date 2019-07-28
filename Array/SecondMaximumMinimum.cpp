#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;

    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    int maximum=arr[0];
    int second_maximum=arr[1];
    for(int i=0; i<x; i++){
        if(maximum<=arr[i]){
            second_maximum=maximum;
            maximum=arr[i];
        }
        else if(second_maximum<=arr[i]){
            second_maximum=arr[i];
        }
    }
    cout<<"Second maximum is: "<<second_maximum<<endl;

    int arr1[x];
    for(int i=0; i<x; i++){
        cin>>arr1[i];
    }
    int minimum=arr1[0];
    int second_minimum=arr1[1];
    for(int i=0; i<x; i++){
        if(minimum>=arr1[i]){
            second_minimum=minimum;
            minimum=arr1[i];
        }
        else if(second_minimum>=arr1[i]){
            second_minimum=arr1[i];
        }
    }
    cout<<"Second minimum is: "<<second_minimum<<endl;
}
