#include<iostream>
using namespace std;

int main()
{
    int principle, time, rate;
    cout<<"Enter the principle: ";
    cin>>principle;
    cout<<"Enter the time : ";
    cin>>time;
    cout<<"Emter the rate: ";
    cin>>rate;
    cout<<"The S.I. is: "<< (principle*time*rate)/100 <<endl;
    return 0;
}