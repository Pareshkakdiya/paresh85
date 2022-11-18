#include <iostream>
using namespace std;
class W;
class S
{
    int a;

public:
    S(int a)
    {
        this->a = a;
    }
    friend void swap(S s, W w);
};
class W
{
    int b;

public:
    W(int b)
    {
        this->b = b;
    }
    friend void swap(S s, W w);
};

void swap(S s, W w)
{
     s.a = s.a + w.b;
     w.b = s.a - w.b;
     s.a = s.a - w.b;
     cout<<s.a<<" "<<w.b<<endl;
}
int main()
{
    S s1(5);
    W w1(9);
    swap(s1, w1);
    return 0;
}