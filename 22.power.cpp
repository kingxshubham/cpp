#include<iostream>
#include<cmath>
using namespace std;
int main(){

    int a,b;
    cin >> a>>b;
    int power = 1;
    for(int i=0;i<b;i++){
        power *= a;
    }
    cout << power << endl;
    cout << pow(a,b)<<endl;
}