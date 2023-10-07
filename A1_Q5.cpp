#include <iostream>
using namespace std;
void CountDigits(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n=n/10;
    }
    cout<<count<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    CountDigits(n);
}
