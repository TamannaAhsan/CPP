#include<iostream>
using namespace std;

int SumOfDigits(int);
int main(){
    int num;
    cout<<"Enter number: "<<endl;
    cin>>num;
    int result=SumOfDigits(num);
    cout<<"Sum is: "<<result<<endl;

}
int SumOfDigits(int num){
    if(num==0){
        return 0;
    }
    else{
        return ((num%10)+SumOfDigits(num/10));
    }
}
