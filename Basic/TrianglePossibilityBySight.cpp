#include<iostream>
using namespace std;

int main(){

    cout<<"Enter numbers: "<<endl;
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Triangle can be formed"<<endl;
        }
    else{
        cout<<"Triangle can not be formed"<<endl;
    }

}

