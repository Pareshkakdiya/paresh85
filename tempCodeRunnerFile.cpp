#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(){}
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b;
    }
    A operator+(A obj)
    {
        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    A c1(10, 2), d2(20, 3), e4(30, 4), f5(40, 6);
    A c3 = c1 + d2 + f5;
    c3.display();
    return 0;
}