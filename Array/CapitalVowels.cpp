#include<iostream>
using namespace std;

int main(){

    cout<<"Enter word: "<<endl;
    string arr;
    getline(cin,arr);
    for(int i=0; i<arr.size(); i++){
    if(arr[i]>='A' && arr[i]<='Z'){
        if(arr[i]=='A'|| arr[i]=='E'|| arr[i]=='I'|| arr[i]=='O'|| arr[i]=='U'){

        }
        else{
            arr[i]=arr[i]+32;
        }
    }
    else{
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u'){
            arr[i]=arr[i]-32;
        }
    }

    }

    cout<<arr<<endl;
}

