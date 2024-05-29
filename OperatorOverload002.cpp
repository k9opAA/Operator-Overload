//Operator overloading for ++,-- increment decrement prefix/postfix

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
    demo operator++() {
        a = a+1;
    }
    demo operator++(int) {
        a = a+1;
    }

};

int main()
{

    demo aa;
    aa.getdata();
    cout<<"Before increment by OL: ";
    aa.putdata();
    aa++;
    cout<<"After increment by OL: ";
    aa.putdata();
    return 0;
}
