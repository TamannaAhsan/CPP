#include<iostream>
using namespace std;

int main(){

    cout<<"Enter word: "<<endl;
    string arr;
    cin>>arr;
    for(int i=0; i<arr.size(); i++){

    if(arr[i]=='A' && arr[i]=='Z'){

    }
    else{
        arr[i]=arr[i]-32;
    }
    }
    cout<<arr<<endl;
}

