#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%10==1){
        cout<<n-1<<endl;
    }
    else if(n%10==3){
        cout<<n-3<<endl;
    }
    else if(n%10==4){
        cout<<n-4<<endl;
    }
    else if(n%10==5){
        cout<<n+5<<endl;
    }
     else if(n%10==6){
        cout<<n+4<<endl;
    }
     else if(n%10==7){
        cout<<n+3<<endl;
    }
     else if(n%10==8){
        cout<<n+2<<endl;
    }
     else if(n%10==9){
        cout<<n+1<<endl;
    }
}
