#include<iostream>
using namespace std;

int main(){

    cout<<"Enter computers: "<<endl;
    int n;
    cin>>n;

    int arr1[n];
    int arr2[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
        cin>>arr2[i];
        int sum=0;
        if(arr1[i]==1){
            sum+=500;
        }
        else if(arr1[i]==2){
            sum+=600;
        }
         if(arr2[i]==1){
            sum+=200;
        }
        else if(arr2[i]==2){
            sum+=400;
        }
        else if(arr2[i]==3){
            sum+=600;
        }
        cout<<"Per Total is "<<sum<<endl;
    }
}
