#include<iostream>
#include<string>
using namespace std;
class Bar{
    public:
        int b;
};

class Foo{
    friend void swap(Foo&,Foo&);
    public:
        string* ps;
        int a;
        Bar bar;

        Foo(const string s): ps(new string(s)),a(0),bar(Bar()){}
};

inline void swap(Bar& bar1,Bar& bar2){
    cout << "in Bar Swap" << endl;
    using std::swap;//优先使用本文件内部定义的swap函数
    swap(bar1.b,bar2.b);
}


inline void swap(Foo& lhs,Foo& rhs){
    cout << "in Foo Swap" << endl;
    using std::swap;//优先使用本文件内部定义的swap函数
    //swap...

}