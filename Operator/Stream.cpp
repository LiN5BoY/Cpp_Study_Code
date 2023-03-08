#include <iostream>
#include <ostream>

using namespace std;
class A
{
    friend ostream &operator<<(ostream &, const A &);

public:
    int a_;
    A() : a_(0) {}
    A(int a) : a_(a) {}
    A &operator+(const A &a)
    {
        cout << "in operator +" << a.a_ << endl;
        this->a_ += a.a_;
        return *this;
    }
};

ostream &operator<<(ostream &os, const A &a)
{
    cout << "in operator <<" << endl;
    os << a.a_ << endl;
    return os;
}

int main()
{

    A a(1);
    cout << a << endl;

    return 0;
}