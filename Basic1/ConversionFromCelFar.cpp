#include<iostream>
using namespace std;

int main(){

    cout<<"Hello Niloy"<<endl;
    cout<<"Press 1 to check Fahrenheit"<<endl;
    cout<<"Press 2 to check Celsius"<<endl;
    int n;
    cin>>n;
    float input;
    if(n==1){
    cout<<"Celsius to Fahrenheit: "<<endl;
    cin>>input;
    cout<<"Fahrenheit is: "<<input*(9/5+32)<<endl;
    }
    else if(n==2){
    cout<<"Fahrenheit to Celsius: "<<endl;
    cin>>input;
    cout<<"Celsius is: "<<(input-32)*5/9<<endl;
    }

}
