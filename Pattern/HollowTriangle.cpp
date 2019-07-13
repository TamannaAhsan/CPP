#include<iostream>
using namespace std;

int main(){

    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
           if (i==j || j==0 || i==n){
            cout<<"* ";
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }
}

