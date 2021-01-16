#include<iostream>
using namespace std;

// Encapsulation

class c1{
    public:
        int a;
        void fun1(){
            cout<<"Function A called/n";
        }

    private:
        int b;
        void fun2(){
            cout<<"Function B called\n";
        }
    protected:
        int c;
        void fun3(){
            cout<<"Function C called\n";
        }
};

// Polymorphism

class c2{
    public:
        void fun21(){
            cout<<"fun1 with no argument\n";
        }

        void fun21(int num){
            cout<<"fun1 with int arguments\n";
        }

        void fun21(double num){
            cout<<"fun1 with double arguments\n";
        }
};

class complexNo{
    int real, imag;
    public:
        complexNo(int r, int i){
            real = r;
            imag = i;
        }

        complexNo operator + (complexNo const &obj){
            complexNo res(0,0);
            res.imag = imag + obj.imag;
            res.real = real + obj.real;
            return res;
        }

        void display(){
            cout<<real<<" i"<<imag<<endl;
        }
};

class base{
    public:
        void print(){
            cout<<"Base class print function\n";
        }
        virtual void display(){
            cout<<"Base class display function\n";
        }
};

class derived: public base{
    public:
        void print(){
            cout<<"Derived class print function\n";
        }
        void display(){
            cout<<"Derived class display function\n";
        }
};

int main(){

    c1 obj1;
    obj1.a = 2;
    obj1.fun1();

    // obj1.b = 3;  //Give error bcz we can't access private members outside class
    // obj1.fun2(); // It also give error

    c2 obj2;
    obj2.fun21();
    obj2.fun21(4);
    obj2.fun21(8.7);

    complexNo obj3(12,7), obj4(6,7);
    complexNo obj5 = obj3 + obj4;
    obj5.display();

    base *baseptr;
    derived obj6;
    baseptr = &obj6;

    baseptr -> print();
    baseptr -> display();
    return 0;
}