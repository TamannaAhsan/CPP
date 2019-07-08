#include<iostream>
using namespace std;

int main(){

cout<<"Enter n1, n2, n3: "<<endl;
int n1, n2, n3;
cin>>n1>>n2>>n3;

if(n1>n2){
    if(n1>n3){
        cout<<n1<<" is max"<<endl;
    }
}
if(n2>n1){
    if(n2>n3){
        cout<<n2<<" is max"<<endl;
    }
}
if(n3>n2){
    if(n3>n1){
        cout<<n3<<" is max"<<endl;
    }
}
}
