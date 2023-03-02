#include<map>
#include<iostream>
using namespace std;
void func(){
    map<int,int> m =
        {
            {1,2},
            {2,3}
        };
    cout << m[1] << endl;//2

    for(map<int,int>::iterator it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}

int main(){
    func();
    return 0;
}