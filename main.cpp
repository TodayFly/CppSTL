#include <iostream>
#include <stdlib.h>
using namespace std;

void TestFun();
void iteratorandtraitsFun();
void basicF();
int main()
{
    char c='b',tmp=' ';
    while (c!='Q' && c!='q') {
        switch (c) {
        case 't':
            std::cout<<"TestFun\n";
            TestFun();
            break;
        case 'i':
            iteratorandtraitsFun();
            break;
        case 'b':
            basicF();
        default:
            std::cout<<"default\n";
            break;
        }
        c=getc(stdin);
        tmp=getc(stdin);
    }
    exit(0);
}
