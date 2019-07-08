#include<iostream>
using namespace std;

int main(){

cout<<"Enter n1, n2, n3: "<<endl;
int n1, n2, n3;
cin>>n1>>n2>>n3;
if(n1>n2 && n3>n2 ){
    cout<<n1+n3<<" is the summation of n1 and n3"<<endl;
}
if(n2>n1 && n3>n1 ){
    cout<<n2+n3<<" is the summation of n2 and n3"<<endl;
}
if(n1>n3 && n2>n3 ){
    cout<<n1+n2<<" is the summation of n2 and n3"<<endl;
}

}
