#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr[x];
    int max_value;
    for(int i=0; i<x; i++){
        cin>>arr[i];
        if(i==0){
            max_value = arr[i];
        }
        max_value=max(arr[i],max_value);

    }
    cout<<"Maximum value is: "<<max_value<<endl;


}
