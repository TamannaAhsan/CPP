#include<iostream>
using namespace std;

int main(){

    cout<<"Enter numbers: "<<endl;
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is max"<<endl;
        }
    }
    if(b>a){
        if(b>c){
            cout<<b<<" is max"<<endl;
        }

    }
    if(c>a){
        if(c>b){
            cout<<c<<" is max"<<endl;
        }
    }

    if(a<b){
        if(a<c){
            cout<<a<<" is min"<<endl;
        }
    }
    if(b<a){
        if(b<c){
            cout<<b<<" is min"<<endl;
        }

    }
    if(c<a){
        if(c<b){
            cout<<c<<" is min"<<endl;
        }
    }

}
