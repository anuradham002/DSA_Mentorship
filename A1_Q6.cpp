#include <iostream>
using namespace std;
void PrintDigits(int n)
{
    int d=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        cout<<d<<endl;
    }
    
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    PrintDigits(n);
}
