#include<iostream>
using namespace std;

bool isprime(int n){
    for (int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
}

void generatePrime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" "<<endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    generatePrime(n);
    return 0;
}