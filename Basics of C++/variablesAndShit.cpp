/*
    This is how we declare an integer:
        int a;
    This is how we declare a floating point:
        float mynumber;

    We can declare variables like this:
        int a, b, c;
    Or like this:
        int a;
        int b;
        int c;
*/

#include <iostream>
using namespace std;

int main ()
{
    int a, b, result;

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;

    cout << result;

    return 0;
}