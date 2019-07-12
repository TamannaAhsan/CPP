#include<iostream>
using namespace std;

int main(){

    cout<<"Enter word: "<<endl;
    string arr;
    cin>>arr;
    cout<<"Enter x, y: "<<endl;
    int x,y;
    cin>>x>>y;
    if(arr[x]>='a' && arr[x]<='z' && arr[y]>='a' && arr[y]<='z'){
        cout<<arr<<endl;
    }
    else{
        arr[x]=arr[x]+32;
        arr[y]=arr[y]+32;
        cout<<arr<<endl;
    }

}
