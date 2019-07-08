#include<iostream>
using namespace std;

int main(){
    cout<<"Enter array values: "<<endl;
    int arr1[6];
    for(int i=0; i<6; i++){
        cin>>arr1[i];
    }

    float arr2[6];
    for(int i=0; i<6; i++){
        cin>>arr2[i];
    }

    float arr3[6];
    for(int i=0; i<6; i++){
       arr3[i]=arr1[i]+arr2[i];
    }


    float arr4[6];
    for(int i=0; i<6; i++){
        if(arr1[i]>arr2[i]){
            arr4[i]=arr1[i]-arr2[i];
        }
        else{
            arr4[i]=arr2[i]-arr1[i];
        }
    }


    float arr5[6];
    for(int i=0; i<6; i++){
       arr5[i]=arr1[i]*arr2[i];
    }


    float arr6[6];
    for(int i=0; i<6; i++){
        if(arr1[i]>arr2[i]){
            arr6[i]=arr1[i]/arr2[i];
        }
         else{
            arr6[i]=arr2[i]/arr1[i];
        }
    }
    cout<<"Summation: ";
    for(int i=0; i<6; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<"Subtraction: ";
    for(int i=0; i<6; i++){
        cout<<arr4[i]<<" ";
    }
    cout<<endl;
    cout<<"Multiplication: ";
    for(int i=0; i<6; i++){
        cout<<arr5[i]<<" ";
    }
    cout<<endl;
    cout<<"Division: ";
    for(int i=0; i<6; i++){
        cout<<arr6[i]<<" ";
    }
}


