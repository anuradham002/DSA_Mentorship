#include <iostream>
using namespace std;

int main(){
    int n,N;
    cout<<"enter value of n: ";
    cin >> n;
    N=n/2+1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((j==1)or(j==n))
            cout<<"* ";
            else if ((j==N) and (i==N))
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }    
    for(int i=N-1;i>=1;i--)
    {
        for(int j=1;j<=N;j++)
        {
            if(j==i)
            cout<<"* ";
            else if(j==1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(int k=N-1;k>=1;k--)
        {
            if(k==i)
            cout<<"* ";
            else if(k==1)
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }
}
