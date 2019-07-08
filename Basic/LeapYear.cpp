#include<iostream>
using namespace std;

int main(){
    cout<<"Enter year: "<<endl;
    int y;
    cin>>y;
    if(y%4==0 && y%100!=0){
        cout<<"LeapYear"<<endl;
    }
    else if(y%400==0){
        cout<<"LeapYear"<<endl;
    }
    else{
        cout<<"NotLeapYear"<<endl;
    }

}
