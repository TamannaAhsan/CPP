#include<iostream>
using namespace std;

int main(){
    //array size
    cout<<"Enter array size: "<<endl;
    int x;
    cin>>x;
    cout<<"Enter values: "<<endl;
    //declaration
    int arr1[x];
    int arr2[x];
    int sum1=0;
    int sum2=0;
    //take input & finding total
    for(int i=0; i<x; i++){
        cin>>arr1[i];
        cin>>arr2[i];
        sum1=sum1+arr1[i];
        sum2=sum2+arr2[i];
}
    cout<<endl;
    //comparison
    if(sum1>sum2){
        cout<<"arr1 is maximum"<<endl;
    }
    else{
        cout<<"arr2 is maximum"<<endl;
    }
}
