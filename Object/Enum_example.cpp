//c++11引入的枚举类（enumeration class）
//目的是同一个命名空间中的不同枚举类型的枚举值名字可以相同
#include<iostream>
enum class new_enum : unsigned int{
    value1,
    value2,
    value3 = 100,
    value4 = 100
};



int main(){

    if (new_enum::value3 == new_enum::value4) {
    // 会输出
    std::cout << "new_enum::value3 == new_enum::value4" << std::endl;
    }
    return 0;
}