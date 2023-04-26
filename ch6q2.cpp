#include<iostream>
using namespace std;
#include<conio.h>
////////////////////////

const char ESC=27;
const double TOLL=0.50;
class tollbooth
{
    private:
    unsigned int cartotal;
    double cashtotal;
    public:
    tollbooth() : cartotal(0),cashtotal(0)
    { 

    }
    int paying_car()
    {
        cartotal++;
        cashtotal+=TOLL;
    }
    int nonpaying_car()
    {
        cartotal++;
    }
    void display()
    {
        cout<<" \n Total number of cars = "<<cartotal
        <<endl<<" Total money collected = "<<cashtotal;
    }

};
/////////////////////////////////////////////////////////////

int main()
{
    tollbooth t1;
    char ch;
    cout << "\nPress 0 for each non-paying car,"
         << "\n 1 for each paying car"
         << "\n Esc to exit the program.\n";
    do
    {
        ch=getche();
        if(ch=='0')
        t1.nonpaying_car();
        if(ch=='1')
        t1.paying_car();
    } while ( ch!=ESC );
    t1.display();
    
    return 0;
}

