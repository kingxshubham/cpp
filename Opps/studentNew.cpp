#include<iostream>
#include "2.constructor.cpp"
#include "3.copyAssinment.cpp"
using namespace std;

int main(){
    /*Student s1;
    s1.display();

    Student s2;
    s2.display();

    Student *s3 = new Student();
    s3->display();
    cout<<"paramaterised constructor demo"<<endl;
    Student s4(10);
    s4.display();

    Student *s5 = new Student(20);
    s5->display();
    Student s6(50,500);
    s6.display();
    */
    /*Student s1(10,100);
    cout<<"address of s1 "<<&s1<<endl;

    Student s2(20,200);
    cout<<"address of s2 "<<&s2<<endl;

    */

    Student s1(20,200);
    Student s2(10,100);
    Student *s3=new Student(30,300);
    s2=s1;//copy assignment operator
    *s3=s1;
    s2=*s3;
    return 0;
}