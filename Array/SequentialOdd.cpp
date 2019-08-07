#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int  x;
    cin>>x;
    int count1=0;
    int arr[x];
    while(count1!=x){
        if(n%2!=0){
           arr[count1]=n;
           cout<<arr[count1]<<" ";
           count1++;
        }
        n++;

    }
}


