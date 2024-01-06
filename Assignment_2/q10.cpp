#include <iostream>
using namespace std;

int main(){
    int n,N;
    cout<<"enter value of n: ";
    cin >> n;
    N=n/2+1;
    for(int i=1;i<=N;i++)
    {
        for(int j=N;j>=1;j--)
        {
            if(j==i) 
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(int k=2;k<=N;k++)
        {
            if(k==i)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }    
    for(int i=N+1;i<=n;i++)
    {
        for(int j=N;j>=1;j--)
        {
            if(j==n-i+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(int k=2;k<=N;k++)
        {
            if(k==n-i+1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }   
}
