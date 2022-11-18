#include <iostream>
using namespace std;
void Area(int r)
{
    cout << "area of circle " << 3.14 * r * r << endl;
}
void Area(int l, int w)
{
    cout << "area of rectangle " << l * w << endl;
}
void Area(float b, float h)
{
    cout << "area of triangle " << 0.5 * b * h << endl;
}
int main()
{
    Area(5);
    Area(8, 9);
    Area((float)5, 3.5);
    return 0;
}
