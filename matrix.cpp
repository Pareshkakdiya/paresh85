#include <iostream>
using namespace std;
class D
{
    int a[3], i;

public:
    void setData()
    {
        for (i = 0; i < 3; i++)
        {
            cout << "enter the value:";
            cin >> a[i];
        }
    }
    void display()
    {
        for (i = 0; i < 3; i++)
        {
            cout << a[i];
        }
    }

    D operator+(D obj)
    {
        D temp;
        for (i = 0; i < 3; i++)
        {
            temp.a[i] = a[i] + obj.a[i];
        }
        return temp;
    }
};
int main()
{
    D d1;
    d1.setData();
    D d2;
    d2.setData();
    D d3 = d1 + d2;
    d3.display();
    return 0;
}
