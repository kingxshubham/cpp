#include<iostream>
using namespace std;
    int main(){
        int n;
        cout<<"enter the number till you wnt to find even sum"<<endl;
        cin >> n;
        int sum=0;
        int i=2;
        while(i<=n){
            sum=sum+i;
            i+=2;
        }
        cout<<sum;
    }