#include<iostream>
using namespace std;

int main(){
    cout<<"Enter unit: "<<endl;
    float u,x,y;
    cin>>u;

    if(u<=200){
        cout<<u*5<<" Taka per unit"<<endl;
    }
    else if(u>200 && u<=500){
        x=(u-200);
        y=(200.0*5);
        cout<<(x*6.5)+y<<" Taka per unit"<<endl;
    }
    else if(u>500 && u<=1000){
        x=(u-500);
        y=(200*5);
        cout<<(x*8)+y+(300*6.5)<<" Taka per unit"<<endl;
    }
    else if(u>1000){
        x=(u-1000);
        y=(200*5);

        cout<<(x*10)+y+(300*6.5)+(500*8)<<" Taka per unit"<<endl;
    }
}
