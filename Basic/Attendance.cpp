#include<iostream>
using namespace std;

int main(){
    cout<<"Whole classes: "<<endl;
    int c;
    cin>>c;
    cout<<"The classes you attended: "<<endl;
    int a;
    cin>>a;

    float p=(a*1.0/c*1.0)*100;
    cout<<"Your total attendance is: "<<p<<endl;
    if(p>=75){
        cout<<"You can attend the exam"<<endl;
    }
    else{
        cout<<"You cannot attend the exam"<<endl;
    }
}
