#include<iostream>
using namespace std;
int main(){
    int a=10;
    int y=a;

    int &x=a;
    int  &z=a;

    a++;
    x++;
    y++;
    z++;
    cout<<a<<" "<<y<<" "<<z<<endl;

    return 0;
}