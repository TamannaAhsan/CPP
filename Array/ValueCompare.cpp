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
    cout<<"Enter your value: "<<endl;
    int y;
    cin>>y;
    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0; i<x; i++){
    if(arr[i]>y){
        count1++;
    }
    else if(arr[i]==y){
        count2++;
    }
    else{
        count3++;
    }
    }
    cout<<"Total Bigger numbers: "<<count1<<endl;
    cout<<"Total Same numbers: "<<count2<<endl;
    cout<<"Total Smaller numbers: "<<count3<<endl;
}

