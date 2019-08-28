#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Student Numbers: "<<endl;
    int x;
    cin>>x;
    string arr[x];
    int arr2[x];
    int max_value,maxIndex;
    for(int i=0; i<x; i++){
            cin>>arr[i];
            cin>>arr2[i];
}
for(int i=0; i<x; i++){
    if(i==0){
            max_value=arr2[i];
            maxIndex = i;
        }
        else if(arr2[i] > max_value){
            max_value=arr2[i];
            maxIndex = i;
        }
    }
    cout<<arr[maxIndex]<<" "<<arr2[maxIndex]<<endl;
}

