using namespace std;



int main(){

    const int value = 123;
    //从右往左读
    //const 定义 pvalue为常量
    //为一个指针指向int类型
    //当前指向类型不可变
    const int * const pvalue = &value;
}