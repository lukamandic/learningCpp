#include <iostream>
using namespace std;

int main ()
{
    int a = 5;
    int b(3);
    int c{2};
    int result;

    a = a + b;
    result = a - c;
    cout << result;

    return 0;
}

/*
    Type deduction: auto and decltype
        int foo = 0;
        auto bar = foo;  the same as: int bar = foo
    
        int foo = 0;
        decltype(foo) bar;  the same as: int bar;
*/