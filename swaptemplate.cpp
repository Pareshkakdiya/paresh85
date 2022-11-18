#include<iostream>
using namespace std;
template<class t1,class t2>
class A{
    t1 a;
    t2 b;
    public:
    A(t1 a,t2 b){
    this->a=a;
    this->b=b;  
    }
    void display(){
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<<" "<<b<<endl;
    }
};



int main()
{
    A <int, int>a1(6,8);
    a1.display();
    return 0;
}


