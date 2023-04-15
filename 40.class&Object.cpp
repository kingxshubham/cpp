#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    int age;
};
int main(){
    //creating objects statically
    Student s1;
    Student s2;
    Student s3,s4,s5;

    //create objects dynamically
    Student *s6=new Student;
    s1.age =24;
    s1.rollNo =100;

    cout<<s1.age<<" "<<s1.rollNo<<endl;
    //accesing objects dynamically
    (*s6).age=23;
    (*s6).rollNo =30;

    //or
    s6->rollNo =30;
    s6->age =23;
    return 0;

}