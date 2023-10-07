#include <iostream>
using namespace std;
void GCD_LCM(int num1,int num2)
{
    int k=num1;
    int l=num2;
    int a;
    if(num1<num2)
    {
        int r=num2%num1;
        while(r!=0)
        {
        num2=num1;
        num1=r;
        r=num2%num1;
        }
        a=num1;
        cout<<a<<endl;
    }
    else
    {
        int r=num1%num2;
        while(r!=0)
        {
        num1=num2;
        num2=r;
        r=num1%num2;
        }
        a=num2;
        cout<<a<<endl;
    }
    int product=k*l;
    int b=product/a;
    cout<<b;
}
int main()
{
    int n1,n2;
    cout<<"Enter number1:";
    cin>>n1;
    cout<<"Enter number2:";
    cin>>n2;
    GCD_LCM(n1,n2);
}
