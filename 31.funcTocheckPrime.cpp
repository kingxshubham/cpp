#include<iostream>
using namespace std;

bool isprime(int n){
    for (int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
}

int main(){
    int n;
    cin>>n;

    if(isprime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"NotPrime"<<endl;
    }
}