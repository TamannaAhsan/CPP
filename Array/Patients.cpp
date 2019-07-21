#include<iostream>
using namespace std;

int main(){

    cout<<"Enter wards: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the number of beds in the ward: "<<endl;
    int m;
    cin>>m;
    int arr1[n];
    for(int i=0; i<n; i++){
        cout<<"Patients in the ward: "<<endl;
        int p;
        cin>>p;
        cout<<"Enter bed number: "<<endl;
        int m;
        cin>>m;
        if(m>=p){
            cout<<"available bed at"<<arr1[i]<<endl;
        }
        else{
            cout<<"No beds available"<<endl;
        }


    }


}
