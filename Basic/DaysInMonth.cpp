#include<iostream>
using namespace std;

int main(){

    cout<<"Enter month number: "<<endl;
    int m;
    cin>>m;

    if(m==2){
        cout<<"28 days"<<endl;
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        cout<<"31 days"<<endl;
    }
    else if(m==4 || m==6 || m==9 || m==11){
        cout<<"30 days"<<endl;
    }
    else{
        cout<<"No months"<<endl;
    }
}
