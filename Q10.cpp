// x++ means first x will print then increment while in ++x first increment then print.

#include<iostream>
using namespace std;
int main()
{
   int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<x++ <<endl;
    cout<<++x;

   
   return 0;
}