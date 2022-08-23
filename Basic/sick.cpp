#include<iostream>
using namespace std;

int main(){

    int sick =5;
    int earned =10;
    int n;
    cin>> n;

    if(n <= 5){
        sick = sick - n;
        cout<<"Still sick leave left:" <<sick;
    }
    else{
        earned = earned - n;
        cout<<"After deducting the earned numbers of leaves: "<<earned;
    }
}
