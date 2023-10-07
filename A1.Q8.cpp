#include <iostream>
#include<string>
using namespace std;
void Rotate(int n, int k)
{
    string num = to_string(n);
    int len = num.length();
    int n1;
    if(k>0)
    {
       
        string r = num.substr(len-k) + num.substr(0, len-k);
        cout << stoi(r);

        }
    else
    {
      k = abs(k);
      string r = num.substr(k) + num.substr(0, k);
        cout << stoi(r);
    }
}
int main()
{
    int n,k;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;
    Rotate(n,k);
}
