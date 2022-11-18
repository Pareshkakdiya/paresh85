#include <iostream>
using namespace std;
class Maths
{
    int a, b;
    float c, d;

public:
    Maths() {}
    Maths(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << "Addition of two numbers is " << a + b << endl;
        cout << "Subtraction of two numbers is " << a - b << endl;
    }
    Maths(float c, float d)
    {
        this->c = c;
        this->d = d;
        cout << "Multiplication of two numbers is " << c * d << endl;
        cout << "Division of two numbers is " << c / d << endl;
    }
};
int main()
{
    Maths a1(10, 15), a2((float)5, 2.5);
    return 0;
}