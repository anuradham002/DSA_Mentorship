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
            if(((i==1) and(j<=N)) or (i==N))
            cout<<"* ";
            else if((j==n) or (j==N))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }    
    for(int i=N+1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i==n) and(j>=N))
            cout<<"* ";
            else if((j==1) or (j==N))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
