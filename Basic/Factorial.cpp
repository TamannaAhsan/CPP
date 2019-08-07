#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int multiply=1;
    for(int i=n; i>0; i--){
        multiply=multiply*i;
    }
    cout<<multiply<<endl;
}
