//overloaded && operator

#include <iostream>
using namespace std;
class x
{
    bool t;
public:
    x(bool val) : t(val) {}
    bool operator&&(x &j)
    {
        return t && j.t;
    }
    void display()
    {
        cout << "value = " << t << endl;
    }
};
int main()
{
    x num(true); // Initialize with a boolean value
    num.display();
    x other(true); // Initialize another x object with a boolean value
    other.display();
    bool result = num && other; // Using the overloaded && operator
    cout << "Logical AND result: " << result << endl; // Print the result
    return 0;
}
