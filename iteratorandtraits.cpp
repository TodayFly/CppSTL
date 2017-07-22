#include <iostream>
#include "iteratorandtraits.h"

void iteratorandtraitsFun(){
    MyIter<int> m(new int{15});
    int a=18;
    std::cout<<getv2(&a);
}
