#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int power=0;
    int sum=0;
    for(int i=1; i<=x; i++){
        power=i*i;
        sum=sum+power;

    }
    cout<<sum<<endl;

}
