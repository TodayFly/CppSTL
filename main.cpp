#include <iostream>
#include <stdlib.h>
using namespace std;

void TestFun();
void iteratorandtraitsFun();
int main()
{
    char c='i',tmp=' ';
    while (c!='Q' && c!='q') {
        switch (c) {
        case 't':
            std::cout<<"TestFun\n";
            TestFun();
            break;
        case 'i':
            iteratorandtraitsFun();
            break;
        default:
            std::cout<<"default\n";
            break;
        }
        c=getc(stdin);
        tmp=getc(stdin);
    }
    exit(0);
}
