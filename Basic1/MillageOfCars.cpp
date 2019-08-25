#include<iostream>
using namespace std;

int main(){

    cout<<"Enter per liter oil price: "<<endl;
    float p;
    cin>>p;
    cout<<"Enter price: "<<endl;
    float P;
    cin>>P;
    float r=P/p;
    cout<<"Enter car numbers: "<<endl;
    int n;
    cin>>n;
   for(int i=1; i<=n; i++){
        int x, y;
        cin>>x>>y;
        float sum1=0;
        float sum2=0;
        sum1=x*r;
        sum2=y*r;
      cout<<sum1<<" "<<sum2<<endl;

    }

}
