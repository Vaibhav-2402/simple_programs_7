#include<iostream>
using namespace std;
////////////////////////////////

class Int
{
    private:
    int i;
    public:
    Int()
    {
        i=0;
    }
    Int(int i1)
    {
        i=i1;
    }
    void add(Int i2, Int i3)
    {
        i=i2.i+i3.i;
    }
    void display()
    {
        cout<<i;
    }

};
/////////////////////////////////////////

int main()
{
    Int init1(150);
    Int init2(110);
    Int init3;
    
    init3.add(init1, init2);
    cout<<endl<<" I3 = "; init3.display();

    return 0;
}