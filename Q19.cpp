#include<iostream>
using namespace std;
int main()
{
   int a = 10, b = 5, c = a+=b-=2;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}