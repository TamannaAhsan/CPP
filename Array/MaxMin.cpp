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

    int max=arr[0];
    for(int i=0; i<x; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum is: "<<max<<endl;

    int min=arr[0];
    for(int i=0; i<x; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Minimum is: "<<min<<endl;
}
