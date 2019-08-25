#include<iostream>
using namespace std;


int main(){

}
float SumOfSeries(int num){
    if(num==0){
        return 1;
    }
    else{
        return 1/pow(2, num)+SumOfSeries(num);
    }
}

