#include <iostream>
using namespace std;
class cal
{
public:
    void Addition(int a, int b)
    {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void Subtraction(int a, int b)
    {
        cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void Multiplication(int a, int b)
    {
        cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    void Division(int a, int b)
    {
        cout << "Division of " << a << " and " << b << " is " << (float)a / b << endl;
    }
};
int main()
{
    cal c1;
    c1.Addition(20, 50);
    c1.Subtraction(70, 40);
    c1.Multiplication(5, 2);
    c1.Division(1, 3);
    return 0;
}