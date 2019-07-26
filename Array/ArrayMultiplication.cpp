#include<iostream>
using namespace std;

int main(){

    int x;
    cin>>x;
    int arr[x];
    int multiply=1;
    for(int i=0;i<x; i++){
        cin>>arr[i];
        multiply=multiply*arr[i];
        cout<<multiply<<endl;
    }
}
