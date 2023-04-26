#include<iostream>
using namespace std;
////////////////////////////////////////
const int SIZE = 6;

int main()
{
    float sales[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        cout<<endl<<"Enter the widget sale of Day "<<i+1<<": "; cin>>sales[i];
    }
    float total=0;
    for(int j=0;j<SIZE;j++)
    total+=sales[j];
    float average = total/SIZE;
    cout<<endl<<"Average = "<<average;
    return 0;
}