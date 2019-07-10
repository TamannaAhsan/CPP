#include<iostream>
using namespace std;

int main(){

    cout<<"Enter words: "<<endl;
    string arr;
    cin>>arr;
    int count1=0;
    int count2=0;
    for(int i=0 ; i< arr.size(); i++){

        if(arr[i]>='A' && arr[i]<='z'){
            count1++;
        }
        else{
            count2++;
    }
    }
    cout<<"Total Alphabets: "<<count1<<endl;
    cout<<"Total Numbers: "<<count2<<endl;
}
