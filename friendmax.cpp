#include <iostream>
using namespace std;
class B;
class A
{
    int num;

public:
    A(int num)
    {
        this->num = num;
    }
    friend void max(A a1, B b1);
};
class B
{
    int num;

public:
    B(int num)
    {
        this->num = num;
    }
    friend void max(A a1, B b1);
};
void max(A a1, B b1)
{
    if (a1.num > b1.num)
    {
        cout << "Number in class A is gretest " << a1.num;
    }
    else if (a1.num < b1.num)
    {
        cout << "Number in class B is gretest " << b1.num;
    }
    else
    {
        cout << "Number in both class is equal";
    }
}
int main()
{
    int num;
    cout << "enter a number for class A ";
    cin >> num;
    A a1(num);
    cout << "enter a number for class B ";
    cin >> num;
    B b1(num);
    max(a1, b1);
    return 0;
}
