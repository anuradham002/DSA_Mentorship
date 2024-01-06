#include <iostream>
using namespace std;

int main(){
    int n,N;
    cout<<"enter value of n: ";
    cin >> n;
    if(n%2==0)
    N=n/2;
    else
    N=n/2+1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if((i==N) or (j==N))
            cout<<"* ";
            else
            cout<<"  ";
        }   
         for(int k=1;k<=N;k++)
            {
                if(k<i)
                cout<<"* ";
            }
         cout<<endl;
    }    
     for(int i=N-1;i>=1;i--) 
     {
        for(int j=1;j<=N;j++)
        {
            if((i==N) or (j==N))
            cout<<"* ";
            else
            cout<<"  ";
        }  
        for(int k=1;k<=N;k++)
            {
                if(k<i)
                cout<<"* ";
            }
         cout<<endl;
    }
    
       
}      
