#include <iostream>

using namespace std;

//折叠表达式
template <typename ... T>
auto sum(T ... t){
    return (t + ...);
}

//类型模板参数推导
template <typename T,typename U>
auto add(T t,U u){
    return t+u;
}

//非类型模板参数推导
template <typename T,int BufSize>
class buffer_t {
    public:
        T& alloc();
        void free(T& item);
    private:
        T data[BufSize];
}

//使用auto关键字，让编译器辅助完成具体类型推导
template <auto value> void foo(){
    cout << value << endl;
    return;
}

int main(){
    //利用变长参数
    cout << sum(1,2,3,4,5,6,7,8,9,10) << endl;

    buffer_t<int,100> buf;//100作为模板参数
    foo<10>();//推导int类型
}