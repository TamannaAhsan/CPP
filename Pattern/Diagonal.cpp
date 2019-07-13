#include<iostream>
using namespace std;

int main(){

    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
           if (i==j){
            cout<<"* ";
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}

