#include<iostream>
using namespace std;

class Foo{
    public:
        int a_;


        Foo(int a) : a_(a){
            cout << "in direct constructor" << endl;
        }

        Foo(const Foo& foo){
            cout << "in copy constuctor" << endl;
        }

        Foo& operator = (const Foo& foo){
            cout << "in copy assignment" <<endl;
            this->a_ = foo.a_;
            return *this; //built-in
        }

        ~Foo(){
            cout << "in Destructor" << endl;
        }
};


int main(){
    Foo foo1(1);
    Foo foo2 = foo1;
    Foo foo3(1);
    foo3 = foo2;


    return 0;
}