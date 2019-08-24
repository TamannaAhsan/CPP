#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr1[x];
    int arr2[x];
    int min_value;
    int temp_min;
    for(int i=0; i<x; i++){
        cin>>arr1[i];
        cin>>arr2[i];
        temp_min=min(arr1[i],arr2[i]);
        min_value = min(temp_min,min_value);

    }
    cout<<"Minimum is: "<<min_value<<endl;
}
