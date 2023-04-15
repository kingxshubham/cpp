//typecasting
#include<iostream>
using namespace std;
int main(){
    char c='a';
    cout<<c+3<<endl;//it will print 100 cause ascii value
    // of "a"
    //this is implicit typeCasting
    //char +int =int;
    //int+float =float;
    //int/float =float
    //char +int =int;

    char ch='A';
    cout<<ch+1<<endl;

    ch=ch+1;
    cout<<ch<<endl;

}