#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Buyers: "<<endl;
    int n;
    cin>>n;
    int arr1[n]; //Monitor
    int arr2[n]; //KeyBoard
    int arr3[n]; // Mouse
    int arr4[n]; //CPU
    int arr5[n]; //SoundBox

    for(int i=0; i<n; i++){
            cin>>arr1[i];
            cin>>arr2[i];
            cin>>arr3[i];
            cin>>arr4[i];
            cin>>arr5[i];

            cout<<"Monitors price: "<<endl;
            int m;
            cin>>m;
            cout<<"Keyboard price: "<<endl;
            int k;
            cin>>k;
            cout<<"Mouse price: "<<endl;
            int mo;
            cin>>mo;
            cout<<"CPU price: "<<endl;
            int c;
            cin>>c;
            cout<<"SoundBox price: "<<endl;
            int s;
            cin>>s;
            cout<<"Enter the buyers budget: "<<endl;
            int budget;
            cin>>budget;

        int sum=0;
        sum=sum+(arr1[i]*m+arr2[i]*k+arr3[i]*mo+arr4[i]*c+arr5[i]*s);

        if(budget>=sum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}
