#include<iostream>
using namespace std;

int main(){

    cout<<"Enter words: "<<endl;
    string arr;
    cin>>arr;
    int count1=0;
    int count2=0;
    for(int i=0 ; i< arr.size(); i++){
            if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u'|| arr[i]=='A'|| arr[i]=='E'|| arr[i]=='I'|| arr[i]=='O'|| arr[i]=='U')
                count1++;
            else
                count2++;

    }
    cout<<"Total Vowel: "<<count1<<endl;
    cout<<"Total Consonant: "<<count2<<endl;

}
