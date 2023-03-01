#include<iostream>

using namespace std;




class A{
    public:
        int a_;//a_代表规格化的成员变量

        A(int value) : a_(a) {}
};



int main(){
    A a(10);
    A a1 = A(10);
    A a2 = 10;
    
}

