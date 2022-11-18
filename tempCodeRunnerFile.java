#include<iostream>
using namespace std;
class person{
protected:
    string name;
    int age;
public:
    void per1(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class student{
protected:
    float percentage;
public:
    void percen(float percentage){
        this->percentage=percentage;
    }
};
class teacher{
protected:
    int salary;
public:
    void sal(int salary){
        this->salary=salary;
    }
};
class Derived : public person, public student, public teacher 
{
    void Display(){
        cout<<"Name of person is "<<name<<" and age is "<<age<<endl;
        cout<<"He is a student and his percentage is "<<percentage<<endl;
        cout<<"He/She is a teacher and his/her salary is "<<salary<<endl;
    }
};
int main(){
    Derived d1,d2;
    d1.per1("Paresh",36);
    d1.Display();
    return 0;
}