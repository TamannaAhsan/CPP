#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool found = true;
    for(int i=2; i<n; i++){
       if(n%i == 0){
        cout<<"Not Prime"<<endl;
        found = false;
        break;
       }
    }
    if(found) cout<<"Prime"<<endl;
}

