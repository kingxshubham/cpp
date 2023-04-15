//destructor->deallocates memory of objects
/*->same name as class
->no return type
->no input arguments
*/
#include<iostream>
using namespace std;
class Student{
    public:
    ~Student(){
        cout<<"destructor called"<<endl;

    }
    
};