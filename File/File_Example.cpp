#include<string>
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    std::ofstream os("test.txt",std::ios::app);
    os << "thanks\n";
    os << "Hello world\n";

    //buffer
    os.flush();
    os.close();

    std::ifstream is("text.txt");


    string str;
    getline(is,str); 
    cout << str <<endl;



    //stringstream 以空格为分割
    //判断可为ss>>word(String类型)
    return 0;
}