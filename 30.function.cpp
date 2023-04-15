#include<iostream>
using namespace std;

void printHello(){
    cout<<"Hello"<<endl;
}

int add(int a,int b){
    return a+b;
}

int square(int a){
    int ans=a*a;
    return ans;
}

int main(){
    printHello();
    //cout<<"World"<<endl;

    int c=add(2,3);
    cout<<c<<endl;

    cout<<square(10)<<endl;


    return 0;
}