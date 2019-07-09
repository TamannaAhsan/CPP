#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size: "<<endl;
    int x;
    cin>>x;
    cout<<"Enter array values:"<<endl;
    char arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    for(int i=0; i<x; i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
            cout<<i+1<<" "<<"vowel"<<";"<<" ";
        }
        else{
            cout<<i+1<<" "<<"consonant"<<";"<<" ";
        }
    }

}

