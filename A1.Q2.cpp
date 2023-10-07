#include <iostream>
using namespace std;
void PrintMarks(int m)
{
    if(m>90)
    cout<<"Excellent";
    else if((m>80)&&(m<=90))
    cout<<"good";
    else if((m>70)&&(m<=80))
    cout<<"fair";
    else if((m>60)&&(m<=70))
    cout<<"meets expectations";
    else
    cout<<"below par";
}
int main()
{
    int m;
    cout<<"Enter the marks of student(integer value): ";
    cin>>m;
    PrintMarks(m);
}
