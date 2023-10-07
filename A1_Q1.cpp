#include <iostream>
using namespace std;
void Pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((j==n-i+1)or(i==1)or(i==n))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
     cout<<"Enter the value of n: ";
    cin>>n;
    Pattern(n);
}
