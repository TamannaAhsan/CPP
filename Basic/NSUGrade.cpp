#include<iostream>
using namespace std;

int main(){

    cout<<"NSU Grade: "<<endl;
    int n;
    cin>>n;

    if(n>=0 && n<=60){
        cout<<n<<" Grade is F"<<endl;
        cout<<60-n<<" needed to pass and the grade will be D"<<endl;
    }
     else if(n>=60 && n<=70){
        cout<<n<<" Grade is D"<<endl;
        cout<<70-n<<" needed to get C"<<endl;
    }
     else if(n>=70 && n<=80){
        cout<<n<<" Grade is C"<<endl;
        cout<<80-n<<" needed to get B"<<endl;
    }
     else if(n>=80 && n<=90){
        cout<<n<<" Grade is B"<<endl;
          cout<<90-n<<" needed to get A"<<endl;
    }
     else if(n>=90 && n<=100){
        cout<<n<<" Grade is A"<<endl;
    }
}
