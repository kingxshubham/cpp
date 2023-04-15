#include<iostream>
using namespace std;
int main(){
    cout << "enter 3 no to find greatest" << endl;
    int a,b,c;
    cin>>a>>b>>c;

    if((a>c) && (a>b) ){
        cout << "the greatest no is "<<a<< endl;
    }
    else if((b>c) && (b>a)){
        cout << "the greatest no is "<<b<<endl;
    }
    else{
        cout << "the greatest no is "<<c<<endl;
    }

}