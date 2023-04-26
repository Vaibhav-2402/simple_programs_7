#include<iostream>
using namespace std;
///////////////////////////////////////////

enum etype {labourer,manager,accountant,researcher,secretary};

class date
{
    private:
    int days, months, years;
    public:
    void set_date()
    {
        char temp;
        cout<<endl<<"Enter the date of joining in (DD/MM/YYYY) format: ";
        cin>>days>>temp>>months>>temp>>years;
    }
    void show_date()
    {
        cout<<"this employee has joined on: "<<days<<"/"<<months<<"/"<<years;
    }
};
/////////////////////////////////////////////////

class employee
{
    private:
    int enumber;
    float compen; // compensation
    date date1;
    etype emp;
    public:
    void set_data();
    void show_data();
};
///////////////////////////////////////////////

void employee::set_data()
{
    char c;
    cout<<endl<<"Enter the employee number: "; cin>>enumber;
    cout<<endl<<"Enter the employee compensation: "; cin>>compen;
    date1.set_date();
    cout<<endl<<"Enter the type of employee only first letter(lobourer,manager,accountant,researcher,secretary)";
    cin>>c;
    switch(c)
    {
        case 'l': emp=labourer; break;
        case 'm': emp=manager; break;
        case 'a' : emp=accountant; break;
        case 'r' : emp=researcher; break;
        case 's' : emp=secretary; break;
        default: 
            break;
    }

}
/////////////////////////////////////////////////////////////////////

void employee::show_data()
{
    cout<<endl<<"Employee number is : "<<enumber;
    cout<<endl<<"Employee Compensation is : "<<compen;
    date1.show_date();
    switch(emp)
    {
        case labourer: cout<<"Employee is labourer "; break;
        case manager: cout<<"Employee is manager "; break;
        case accountant : cout<<"Employee is accountant"; break;
        case researcher : cout<<"Employee is researcher"; break;
        case secretary : cout<<"Employee is scretary"; break;
        default:
        break;
    }

}
////////////////////////////////////////////////

int main()
{
    employee e1,e2,e3;
    cout<<"Enter the details of employee 1 : "; e1.set_data();
    cout<<"Enter the details of employee 2 : "; e2.set_data();
    cout<<"Enter the details of employee 3 : "; e3.set_data();

    cout<<"The detaiks of first employee are : "; e1.show_data();
    cout<<"The detaiks of second employee are : "; e2.show_data();
    cout<<"The detaiks of third employee are : "; e3.show_data();
    return 0;
}
