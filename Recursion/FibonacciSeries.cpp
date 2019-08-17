#include <iostream>
using namespace std;

int fib(int x){
    if(x==1 || x==2){
        return 1;
    }
    else{
        return (fib(x-1)+fib(x-2));
    }
}

int main()
{
   cout<<fib(10)<<endl;
}

