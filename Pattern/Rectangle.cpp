#include<iostream>
using namespace std;

int main(){

    cout<<"Enter n and m: "<<endl;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"#";
        }
        cout<<endl;
    }
}
