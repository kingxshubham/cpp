#include<iostream>
using namespace std;

class Student{
    public:
    int rollNo;
    int age;
    void display(){
        cout<<age<<" "<<rollNo;
    }
    int getage(){
        return age;
    }
    void setage(int a){
        age = a;
    }
    
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

    s1.display();//for static objects
    s6->display();//for dynamic objects

    cout<<"s1 age: "<<s1.getage()<<endl;

    s1.setage(24);
    s1.display();
    return 0;

}