#include <iostream>
#include <memory>
#include <utility>


void lambda_expression_capture(){
    //make_unique()方法
    //可以使用make_unique创建并初始化独特的指针
    //而不必手动新建指针并使用普通构造函数
    //使用make_unique可以更快、更清晰地完成这种操作。 
    auto important = std::make_unique<int>(1);
    auto add = [v1 = 1,v2 = std::move(important)](int x,int y)-> int{
        return x+y+v1+(*v2);
    };
    std::cout << add(3,4) <<std::endl;
}