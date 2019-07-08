#include<iostream>
using namespace std;

int main(){

    cout<<"NSU Grade: "<<endl;
    float n;
    cin>>n;

    if(n>=0 && n<=60){
        if(n==59.5){
            cout<<n+0.5<<" Grade is D"<<endl;
        }
        else{
            cout<<n<<" Grade is F"<<endl;
        }
    }
     else if(n>=60 && n<=70){

        if(n==69.5){
            cout<<n+0.5<<" Grade is C"<<endl;
        }
        else{
            cout<<n<<" Grade is D "<<endl;
        }

    }
     else if(n>=70 && n<=80){

        if(n==79.5){
            cout<<n+0.5<<" Grade is B"<<endl;
        }
        else{
            cout<<n<<" Grade is C"<<endl;
        }

    }
     else if(n>=80 && n<=90){
        if(n==89.5){
            cout<<n+0.5<<" Grade is A"<<endl;
        }
        else{
            cout<<n<<" Grade is B"<<endl;
        }

    }
     else if(n>=90 && n<=100){
        cout<<n<<" Grade is A"<<endl;
    }
}

