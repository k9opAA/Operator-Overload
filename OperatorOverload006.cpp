//writing a program to overload ++using member function:
#include <iostream>
using namespace std;
class x
{
    int t;
public:
    x(int val)
    {
        t=val;
    }
    x& operator++(int)
    {
        ++t;
        return *this;
    }
    void display()
    {
        cout<<"value ="<<t<<endl;
    }
};
int main()
{
    x num(9);
    num.display();
    ++num;
    num.display();
}
