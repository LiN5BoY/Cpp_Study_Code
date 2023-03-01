//使用结构化绑定，仅用一行函数内代码实现如下函数：

/*template <typename Key, typename Value, typename F>
void update(std::map<Key, Value>& m, F foo) {
    // TODO:
}
int main() {
    std::map<std::string, long long int> m {
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };
    update(m, [](std::string key) {
        return std::hash<std::string>{}(key);
    });
    for (auto&& [key, value] : m)
        std::cout << key << ":" << value << std::endl;
}*/


#include <iostream>
#include <map>
#include <string>
#include <functional>

template <typename Key,typename Value,typename F>
void update(std::map<Key, Value>& m, F foo) {
    //万能引用
    for (auto&& [key,value] : m)
        value = foo(key);
}

int main() {
    std::map<std::string, long long int> m {
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };
    update(m, [](std::string key) {
        return std::hash<std::string>{}(key);
    });
    for (auto&& [key, value] : m)
        std::cout << key << ":" << value << std::endl;
}

//尝试用折叠表达式实现用于计算均值的函数，传入允许任意参数。
template<typename ... T>
auto average(T ... t) {
    return (t + ... ) / sizeof... (t);
}
int main() {
    std::cout << average(1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << std::endl;
}