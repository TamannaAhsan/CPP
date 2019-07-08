#include<iostream>
using namespace std;

int main(){

    cout<<"NSU Grade: "<<endl;
    int n;
    cin>>n;

    if(n>=0 && n<=60){
        if(n==58){
            cout<<n+2<<" Grade is D"<<endl;
        }
        else{
            cout<<n<<" Grade is F"<<endl;
        }
    }
     else if(n>=60 && n<=70){

        if(n==68){
            cout<<n+2<<" Grade is C"<<endl;
        }
        else{
            cout<<n<<" Grade is D "<<endl;
        }

    }
     else if(n>=70 && n<=80){

        if(n==78){
            cout<<n+2<<" Grade is B"<<endl;
        }
        else{
            cout<<n<<" Grade is C"<<endl;
        }

    }
     else if(n>=80 && n<=90){
        if(n==88){
            cout<<n+2<<" Grade is A"<<endl;
        }
        else{
            cout<<n<<" Grade is B"<<endl;
        }

    }
     else if(n>=90 && n<=100){
        cout<<n<<" Grade is A"<<endl;
    }
}
