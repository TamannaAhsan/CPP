#include<iostream>
using namespace std;

int main(){
    cout<<"Enter power: "<<endl;
    int p;
    cin>>p;
    int power=1;
    for(int i=0; i<10; i++){
        power=power*p;
        cout<<power<<endl;
    }

}

