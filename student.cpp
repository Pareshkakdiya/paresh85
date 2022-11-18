#include <iostream>
using namespace std;
class student
{
protected:
      int rnumber;

public:
      void setR(int rnumber)
      {
            this->rnumber = rnumber;
      }
};
class marks
{
protected:
      int m1;
      int m2;
      int totalm;

public:
      void setM(int m1, int m2)
      {
            this->m1 = m1;
            this->m2 = m2;
            totalm = m1 + m2;
      }
};
class result : public student, public marks
{
public:
      void Display()
      {
            cout << "Roll number of student is " << rnumber << endl;
            cout << "the mark1 of student is " << m1 << " and mark 2 is " << m2 << endl;
            cout << "total marks of student is " << totalm << endl;
      }
};
int main()
{
      result d1;
      d1.setR(1001);
      d1.setM(67, 78);
      d1.Display();
      return 0;
}