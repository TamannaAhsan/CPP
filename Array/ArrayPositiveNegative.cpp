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
     for(int i=0; i<x; i++){
        if(arr[i]>0){
            cout<<"Positive: "<<arr[i]<<endl;
        }
        else if(arr[i]==0){
            cout<<"Zero: "<<arr[i]<<endl;
        }
        else{
            cout<<"Negative: "<<arr[i]<<endl;
        }
     }

}
