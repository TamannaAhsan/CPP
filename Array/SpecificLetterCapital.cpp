#include<iostream>
using namespace std;

int main(){

    cout<<"Enter word: "<<endl;
    string arr;
    cin>>arr;
    cout<<"Enter x, y: "<<endl;
    int x,y;
    cin>>x>>y;
    if(arr[x]>='A' && arr[x]<='Z' && arr[y]>='A' && arr[y]<='Z'){
        cout<<arr<<endl;
    }
    else{
        arr[x]=arr[x]-32;
        arr[y]=arr[y]-32;
        cout<<arr<<endl;
    }

}
