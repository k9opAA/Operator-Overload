//Operator overloading for assignment +=, -=

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
    demo operator+=(demo bb) {
        a = a + bb.a;
    }
};

int main()
{

    demo aa, bb;
    aa.getdata();
    bb.getdata();
    cout<<"value off a: ";
    aa.putdata();
    cout<<endl;
    cout<<"value off b: ";
    bb.putdata();
    aa+=bb;
    cout<<endl;
    cout<<"value off new a: ";
    aa.putdata();
    return 0;
}
