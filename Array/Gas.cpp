#include<iostream>
using namespace std;

int main(){

    cout<<"Enter n: "<<endl;
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int sum=0;
    for(int i=0; i<n; i++){
            cin>>arr1[i]>>arr2[i];
         sum+=(arr1[i]*600+arr2[i]*800);

    }
     cout<<sum;




}
