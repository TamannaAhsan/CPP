#include<iostream>
using namespace std;

int main(){

    int yr;
    cin>>yr;
    int arr[10];
    int count1=0;
    while(count1!=10){
    if(yr%4 ==0 && yr%100 != 0 || yr%400 ==0){
    arr[count1]=yr;
    cout<<arr[count1]<<" ";
        count1++;

        }
    yr++;
    }
}

