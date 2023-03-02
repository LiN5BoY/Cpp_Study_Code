/*
值捕获
与参数传值类似，值捕获的前提是变量可以拷贝
不同之处则在于
被捕获的变量在 Lambda 表达式被创建时拷贝
而非调用时才拷贝：
*/


#include<iostream>
void lambda_value_capture(){
    int value = 1;
    auto copy_value = [value]{
        return value;
    };
    value = 100;
    auto stored_value = copy_value();
    std::cout << "stored_value = " << stored_value << std::endl;
    // 这时, stored_value == 1, 而 value == 100.
    // 因为 copy_value 在创建时就保存了一份 value 的拷贝
}