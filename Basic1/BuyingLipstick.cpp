#include<iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int sum=x;
    int count1=0;
    while(sum!=0){
        int y;
        cin>>y;
        if(y<=sum){
        sum=sum-y;
        count1++;
    }
    else
        break;
    }
    cout<<count1<<" ";
}

