#include<iostream>
using namespace std;

int main(){

    int yr;
    cin>>yr;
    bool nf=true;
    while(nf){
        if(yr%4==0 && yr%100!=0 || yr%400==0){
           cout<<"LeapYear "<<yr<<endl;
           nf=false;
           }
           yr++;
    }
}

