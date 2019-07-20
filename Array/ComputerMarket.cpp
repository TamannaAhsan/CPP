#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Buyers: "<<endl;
    int n;
    cin>>n;
    int arr1[n]; //Monitor
    int arr2[n]; //Keyboard
    int arr3[n]; // Mouse
    int arr4[n]; //CPU
    int arr5[n]; //SoundBox

    for(int i=0; i<n; i++){
            cin>>arr1[i];
            cin>>arr2[i];
            cin>>arr3[i];
            cin>>arr4[i];
            cin>>arr5[i];
            cout<<"Enter the Buyers Budget: "<<endl;
            int budget;
            cin>>budget;

        int sum=0;
        if(arr1[i]==1){
            sum=sum+200;
        }
        else if(arr1[i]==2){
            sum=sum+500;
        }

        if(arr2[i]==1){
            sum=sum+200;
        }
        else if(arr2[i]==2){
            sum=sum+400;
        }
        else if(arr2[i]==3){
            sum=sum+600;
        }

        if(arr3[i]==1){
            sum=sum+150;
        }
        else if(arr3[i]==2){
            sum=sum+250;
        }
        else if(arr3[i]==3){
            sum=sum+500;
        }

        if(arr4[i]==1){
            sum=sum+10000;
        }
        else if(arr4[i]==2){
            sum=sum+15000;
        }
        else if(arr4[i]==3){
            sum=sum+20000;
        }

        if(arr5[i]==1){
            sum=sum+25000;
        }
        else if(arr5[i]==2){
            sum=sum+30000;
        }

        if(budget>=sum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}
