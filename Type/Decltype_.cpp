int main(){
    int i = 3;
    decltype(i) j = 456;//类似如此，自动推断j为i的类型并赋值
}