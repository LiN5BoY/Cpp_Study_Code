#include<map>


using namespace std;




class A{
    public:
        int a_;
        A(int a) : a_(a){}
};

bool WannaBigger(const A& a1,const A& a2){
    return a1.a_ > a2.a_;
}


void func(){
    map<A,int,decltype(WannaBigger)*> my_map(WannaBigger);

    my_map.insert({A(1),1});
}



int main(){


    return 0;
}