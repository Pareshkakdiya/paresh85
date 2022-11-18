#include <iostream>
using namespace std;
void cal(int a, int b)
{
    cout << "Addition of two numbers is " << a + b << endl;
    cout << "subtraction of two numbers is " << a - b << endl;
}

void cal(float c, float d)
{
    cout << "multiplication of two numbers is " << c * d << endl;
    cout << "division of two numbers is " << c / d << endl;
}

int main()
{
    cal(456, 980);
    cal((float)345.6, 25.2);

    return 0;
}