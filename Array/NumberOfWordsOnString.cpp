#include<iostream>
using namespace std;

int main(){

    cout<<"Enter words: "<<endl;
    string arr;
    getline(cin,arr);

    int count=1;
    for(int i=0; i<(int)arr.size(); i++){
        if(arr[i]==' ')
        count++;
    }
    cout<<count;
}

