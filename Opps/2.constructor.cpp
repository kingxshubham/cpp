#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    int age;
    //constructor
    Student(){
        cout<<"constructor called"<<endl;
    }
    Student(int r){
        cout<<"constructor2 called"<<endl;
        rollNo=r;
        
    }

    Student(int a,int r){
        cout<<"constructor3 called"<<endl;
        age = a;
        rollNo=r;
    }
    void display(){
        cout<<age<<" "<<rollNo;
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age = a;
    }
    ~Student(){
        cout<<"destructor called"<<endl;

    }
    
};
