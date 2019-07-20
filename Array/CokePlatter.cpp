#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Students: "<<endl;
    int n;
    cin>>n;

    cout<<"Enter cokes and platters: "<<endl;
    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
        cin>>arr2[i];
        int sum=0;
        if(arr1[i]==1){
            sum=sum+18;
        }
        else if(arr1[i]==2){
            sum=sum+20;
        }
         else if(arr1[i]==3){
            sum=sum+35;
        }
         if(arr2[i]==1){
            sum=sum+50;
        }
        else if(arr2[i]==2){
            sum=sum+100;
        }
         else if(arr2[i]==3){
            sum=sum+150;
        }

        cout<<"Per Student bill: "<<sum<<endl;
    }
    }
