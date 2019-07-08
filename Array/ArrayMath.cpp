#include<iostream>
using namespace std;

int main(){

    cout<<"Enter array values: "<<endl;
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    int sum=0;
    int multiply=1;
    for(int i=0; i<10; i++){
      sum=sum+arr[i];
      multiply=multiply*arr[i];
    }
    float average=(sum*1.0)/10;
    cout<<sum<<" is Summation"<<endl;
    cout<<average<<" is Average"<<endl;
    cout<<multiply<<" is Multiplication"<<endl;

}
