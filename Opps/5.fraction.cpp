#include<iostream>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(int numerator, int denominator){
            this->numerator=numerator;
            this->denominator=denominator;
        }
        void print(){
            cout<<numerator<<"/"<<denominator<<endl;
        }
        void add(Fraction f2){
            int lcm=this->denominator*f2.denominator;
            int x=lcm/this->denominator;
            int y=lcm/numerator;
            int num=x*numerator+y*f2.numerator;

            //strores result in f1
            this->numerator=num;
            this->denominator=lcm;
            simplify();
        }
        void simplify(){
            int gcd=1;
            int j=min(this->numerator,this->denominator);
            for (int i=0;i<=j;i++){
                if(numerator%i==0 && denominator%i==0){
                    gcd=i;
                }
            }
            numerator=numerator/gcd;
            denominator=denominator/gcd;
        }

};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
    return 0;
}