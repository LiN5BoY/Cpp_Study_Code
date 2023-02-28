#include<iostream>

using namespace std;

template<typename T0,typename... T>

void printf2(T0 t0,T... t){
    cout << t0 << endl;
    if constexpr (sizeof...(t) > 0) printf2(t...);
}

int main(){
    printf2(1,2,3,4,5,6,7,111);

    return 0;
}