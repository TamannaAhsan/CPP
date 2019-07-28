/*
In the name of Allah, Most Gracious and Most Merciful!

*/
#include<iostream>
using namespace std;
int main () {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int minimum = arr[0];
int second_minimum = arr[1];
for(int i=0;i<n;i++){
    if(minimum >= arr[i]){
        second_minimum = minimum;
        minimum = arr[i];
    }
    else if(second_minimum>= arr[i]){
        second_minimum = arr[i];
    }
}
cout<<second_minimum;
}
