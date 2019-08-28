#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Students Number: "<<endl;
    int x;
    cin>>x;
    int arr[x];
    string arr2[x];
    int max_value;
    int maxIndex;
    int min_value;
    int minIndex;
    for(int i=0; i<x; i++){
        cin>>arr2[i];
        cin>>arr[i];
    }
    for(int i=0; i<x; i++){
        if(i==0){
            max_value=arr[i];
            maxIndex=i;
        }
        else{
            if(arr[i]>max_value){
                max_value=arr[i];
                maxIndex=i;
            }
        }
    }
    for(int i=0; i<x; i++){
        if(i==0){
            min_value=arr[i];
            minIndex=i;
        }
        else{
            if(arr[i]<min_value){
                min_value=arr[i];
                minIndex=i;
            }
        }
    }
    cout<<"First Student is: "<<arr2[maxIndex]<<" "<<arr[maxIndex]<<endl;
    cout<<"Last Student is: "<<arr2[minIndex]<<" "<<arr[minIndex]<<endl;
}
