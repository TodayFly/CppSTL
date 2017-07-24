#include <iostream>
using namespace std;
void basic_print (std::initializer_list<int> vals){ // 列表
    for (auto p=vals.begin(); p!=vals.end(); ++p) { std::cout << *p << "\n";
    }
}

class basic_class1{
public:
    basic_class1(int t1,int t2); //basic_class1(1,2);构造
    basic_class1(std::initializer_list<int>);//可以用列表进行初始化。basic_class1 b1{1,2};建议使用这种
    explicit basic_class1(int t1,int t2,int t3); // 无法进行 basic_class1 b2={1,2,3}; 可以basic_class1 b2{1,2,3};
};

void basicF(){
    basic_print({1,2,3,4,5,6,7});
}
