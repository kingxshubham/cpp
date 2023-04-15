#include<iostream>
using namespace std;

int main(){
    char name[100];
    cout<<"Enter name: "<<endl;
    cin.getline(name,100,'o');

    cout<<"your name: "<<name<<endl;

    return 0;
}