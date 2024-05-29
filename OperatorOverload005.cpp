// a + b
// c + d
// ac + bd

#include<iostream>
using namespace std;

class demo {
    int a, b;
public:
    void setData(int c1, int c2) {
        a = c1;
        b = c2;
    }
    friend demo sumD(demo o1, demo o2);
    void getData()  {
        cout << "Values are: " << a << " and " << b << endl;
    }
};

demo sumD(demo o1, demo o2) {
        demo o3;
        o3.setData((o1.a + o2.a), (o1.b + o2.b));
        return o3;
    }

int main() {
    demo c1, c2, sum;
    c1.setData(1, 4);
    c1.getData();
    c2.setData(2, 6);
    c2.getData();
    sum = sumD(c1, c2);
    sum.getData();
    return 0;
}
