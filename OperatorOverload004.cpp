//Operator overloading for assignment =

#include<iostream>
using namespace std;
class demo{
    int a;
public:
    void getdata(){
        cout<<"\nEnter a number: ";
        cin>>a;
    }
    void putdata(){
        cout<<a<<endl;
    }
    demo operator=(demo aa) {
        a = aa.a;
    }
};

int main()
{

    demo aa, bb;
    aa.getdata();
    cout<<"value off aa: ";
    aa.putdata();
    cout<<endl;
    bb=aa;
    cout<<"value off bb: ";
    bb.putdata();
    return 0;
}
