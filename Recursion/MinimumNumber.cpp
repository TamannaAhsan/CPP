#include<iostream>
using namespace std;

int min(int a, int b){
    if(a<b)
    return a;
    return b;

}
int MinValue(int arr[], int n){
    if(n==0)
        return arr[0];
        return min(MinValue(arr, n-1), arr[n]);
}
int main(){
    int arr[6];
   for(int i=0; i<6; i++){
    cin>>arr[i];
   }
    int Min_Value=MinValue(arr, 5);
    cout<<Min_Value<<endl;

}
