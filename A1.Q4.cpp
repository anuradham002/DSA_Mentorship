#include <iostream>
using namespace std;
void Primes(int low,int high)
{
    int count=0;
    for(int i=low;i<=high;i++)
    {
        if(i==1) ++i;
    
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
            count++;
            break;
            }
            else
            count=0;
        }
        if(count==0)
        cout<<i<<endl;
    }
}
int main()
{
    int low,high;
    cout<<"Enter the lower limit: ";
    cin>>low;
    cout<<"Enter the higher limit: ";
    cin>>high;
    Primes(low,high);
}
