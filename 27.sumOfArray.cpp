#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the number of elements"<<endl;
    cin >> n;
    cout<<"enter the element"<<endl;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
}