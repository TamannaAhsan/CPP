#include<iostream>
using namespace std;

int main(){

    int arr[6]={56,90,63,21,86,54};
    cout<<"Enter value that I want to check: "<<endl;
    int y;
    cin>>y;
    for(int i=0; i<6; i++){
            if(arr[i]==y){
                cout<<"Position is: "<<i+1;
            }

    }
}
