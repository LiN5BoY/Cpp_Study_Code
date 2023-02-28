#include<iostream>
using namespace std;


template<typename T>

/*
C++ STL的std::is_integral模板
用于检查给定类型是否为整数
它返回一个显示相同的布尔值。
用法:
template <class T> struct is_integral;
*/
auto print_type_info(const T& t){
    if constexpr (is_integral<T>::value){
        return t+1;
    }else{
        return t+0.001;
    }
}


int main(){
    std::cout << print_type_info(5) << std::endl;
    std::cout << print_type_info(3.14) << std::endl;
    return 0;
}