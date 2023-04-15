#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    switch(ch){
        case 'm':cout<<"monday"<<endl;
             break;
        case  't':cout<<"tuesday "<<endl;
            break;
        case 'w':cout<<"wednesday "<<endl;
            break;
        case 'T':cout<<"thursday "<<endl;
            break;
        case 'f':cout<<"friday "<<endl;
            break;
        case 's':cout<<"saturday "<<endl;
            break;
        default:cout<<"invalid day"<<endl;
            break;

    }
}