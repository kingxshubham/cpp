#include<iostream>
using namespace std;
int main(){
    cout<<"enter a character to find whether it upper or lower"<<endl;
    char ch;
    cin>>ch;
    if ((ch>='A')&&(ch<='Z')){
        cout<<"it is uppercase"<<endl;
    }
    else if((ch>='a')&&(ch<='z')){
        cout<<"it is lowercase"<<endl;
    }
    else{
        cout<<"it is not a character"<<endl;
    }
}