#include <iostream>
using namespace std;

int main(){
    int n,N;
    cout<<"enter value of n: ";
    cin >> n;
    N=(n/2)+1;
    for(int i=1;i<=N;i++)
    {
        for(int j=N;j>=1;j--)
        {
            if(j<=i)
            {
            cout<<"* ";
            }
            else{
            cout<<"  ";
            }
        }
        for(int k=1;k<i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }    
    for(int i=N-1;i>=1;i--)
    {
        for(int j=N;j>=1;j--)
        {
            if(j<=i)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(int k=i-1;k>=1;k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }   
}
