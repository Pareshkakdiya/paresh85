#include <iostream>
using namespace std;
class cal
{

public:
    int a, b;
    cal() {}
    cal(int a, int b)
    {
        cout << "Addition of two value is " << a + b << endl;
        cout << "subtraction of two value is " << a - b << endl;
        cout << "Division of two value is " << a / b << endl;
        cout << "Multiplication of two value is " << a * b << endl;
    }
};
int main()
{
    cal c1(10, 5);
    return 0;
}