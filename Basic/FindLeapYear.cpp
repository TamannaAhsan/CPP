#include<iostream>
using namespace std;

int main(){

    int yr;
    cin>>yr;

    for(int i=0; i<4; i++){
        if(yr%4==0 && yr%100!=0 || yr%400==0){
           cout<<"LeapYear "<<yr<<endl;
           break;
           }
           yr++;
    }
}
