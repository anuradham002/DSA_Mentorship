#include <iostream>
using namespace std;

int main(){
    int n,c;
    cout<<"enter value of n: ";
    cin >> n;
    int a=0,b=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1)
            cout<<a;
            else if((i==2) and(j==1))
            cout<<b<<" ";
            else{
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            }
        }
        
        cout<<endl;
    }   
}
