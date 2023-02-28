#include<iostream>

using namespace std;

template<typename T,typename... Ts>

auto printf3(T value,Ts... args){
    cout << value << endl;
    (void)  initializer_list<T>{([&args]{
        cout<<args<<endl;
    }(),value)...};
}
int main(){
    printf3(1,2,3,4,5,6,7);
    return 0;
}

