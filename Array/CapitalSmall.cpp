#include<iostream>
using namespace std;

int main(){

    cout<<"Enter word: "<<endl;
    string arr;
    cin>>arr;
    if(arr[0]>='A' && arr[0]<='Z'){
    }
    else{
        arr[0]=arr[0]-32;
    }
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>='a' && arr[i]<='z'){
        }
        else{
            arr[i]=arr[i]+32;
        }
    }
    cout<<arr<<endl;
}

