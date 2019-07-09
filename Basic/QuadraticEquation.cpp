#include<iostream>
#include<math.h>
using namespace std;

int main(){

    cout<<"Enter a,b,c values: "<<endl;
    float a,b,c;
    cin>>a>>b>>c;

    float x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    float x2=(-b-sqrt(b*b-4*a*c))/(2*a);

    cout<<"Quadratic Equation is: "<<x1<<endl;
    cout<<"Quadratic Equation is: "<<x2<<endl;
}
