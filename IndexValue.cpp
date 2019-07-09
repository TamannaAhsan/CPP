#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size: "<<endl;
    int x;
    cin>>x;
    cout<<"Enter values: "<<endl;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    cout<<"Enter Index: "<<endl;
    int y;
    cin>>y;
    cout<<"The value is: "<<arr[y-1];
}
