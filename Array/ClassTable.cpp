#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Classrooms: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter Tables: "<<endl;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum=sum+(arr[i]*4);

    }
    cout<<"Total chairs are: "<<sum<<endl;

}
