#include <iostream>
using namespace std;
void Inverse(int n)
{
     
    int n1=n;
    int counter=0;
        while(n1) // for counting no. of digits present
        {
            counter+=1;
            n1=n1/10;
        } 
        int d1=0; 
        int a[counter],b[counter];//creating arrays to store result
        for(int i=1;i<=counter;i++)
        {
            d1=n%10;
            a[i]=d1; //extracting each digit and storing in an array
            n=n/10;
            b[d1]=i; //for changing position of numbers
        }
       for(int j=counter;j>=1;j--) //printing the array b where no. is stored after changing place
        {
            
            cout<<b[j];
        }
        
}
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    Inverse(n);
}
