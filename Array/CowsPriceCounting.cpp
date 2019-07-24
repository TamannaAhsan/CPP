#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+arr[i]*500;
    }
    cout<<"Total price of cows: "<<sum<<endl;
}
