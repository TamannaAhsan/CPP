#include<iostream>
using namespace std;

int main(){
    cout<<"Enter two values: "<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;
    switch(n){
    case 1: cout<<"Addition is: "<<x+y<<endl;
    break;
    case 2: cout<<"Subtraction is: "<<x-y<<endl;
    break;
    case 3: cout<<"Multiplication is: "<<x*y<<endl;
    break;
    case 4: cout<<"Division is: "<<x/y<<endl;
    break;
    default:cout<<"Invalid"<<endl;
    }

}
