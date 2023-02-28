//委托构造


#include<iostream>

using namespace std;


class Base{
    public:
        int value1;
        int value2;
    Base(){
        value1 = 1;
    }
    Base(int value) : Base(){//委托Base()构造函数
        value2 = value;
    }
};

int main() {
    Base b(2);
    std::cout << b.value1 << std::endl;
    std::cout << b.value2 << std::endl;
    return 0;
}