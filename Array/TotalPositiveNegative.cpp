#include<iostream>
using namespace std;

int main(){

    cout<<"Enter array size: "<<endl;
    int x;
    cin>>x;
    cout<<"Enter array values: "<<endl;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    int count1=0;
    int count2=0;
    int count3=0;
     for(int i=0; i<x; i++){
        if(arr[i]>0){
                count1++;
        }
        else if(arr[i]==0){
            count2++;
        }
        else{
            count3++;
        }
     }
     cout<<"Total Positive Numbers: "<<count1<<endl;
     cout<<"Total Negative Numbers: "<<count2<<endl;
     cout<<"Total Zero Numbers: "<<count3<<endl;

}

