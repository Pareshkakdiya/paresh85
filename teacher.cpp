#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;

public:
    void per1(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class student
{
protected:
    float percentage;

public:
    void percen(float percentage)
    {
        this->percentage = percentage;
    }
};

class teacher
{
protected:
    int salary;

public:
    void sal(int salary)
    {
        this->salary = salary;
    }
};

class Derived : public person, public student, public teacher
{
public:
    void Display1()
    {
        cout << "Person name is " << name << " and his/her age is " << age << endl;
        cout << "He/She is student and his/her percentage is " << percentage << endl;
    }
    void Display2()
    {
        cout << "Person name is " << name << " and his/her age is " << age << endl;
        cout << "He/She is teacher and his/her salary is " << salary << endl;
    }
};

int main()
{
    Derived d1, d2;
    d1.per1("paresh", 36);
    d1.percen(56.67);
    d1.Display1();

    d2.per1("Rakshita", 25);
    d2.sal(200000);
    d2.Display2();

    return 0;
}