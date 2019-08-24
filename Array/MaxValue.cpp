#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr1[x];
    int arr2[x];
    int arr3[x];
    for(int i=0; i<x; i++){
        cin>>arr1[i];
        cin>>arr2[i];
        if(arr1[i]>=arr2[i]){
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[i];
        }

        cout<<arr3[i]<<endl;
    }


}


