#include <iostream>
using namespace std;
template <class t1>
class A
{
public:
    void array()
    {
        t1 a[5];
        t1 i, j, max;
        for (i = 0; i < 5; i++)
        {
            cout << "enter array element" << endl;
            cin >> a[i];
        }
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] > a[j])
                {
                    max = a[i];
                    a[i] = a[j];
                    a[j] = max;
                }
            }
        }
        for (i = 0; i < 5; i++)
        {
            cout << a[i] << " ";
        }
    }
};
int main()
{
    A<int> a1;
    a1.array();
    return 0;
}
