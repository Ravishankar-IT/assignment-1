#include<iostream>
using namespace std;
int main()
{
    int n1,n2,d1,d2,sum;
    cout<<"Enter the n1: ";
    cin>>n1;
    cout<<"Enter the d1: ";
    cin>>d1;
    cout<<"Enter the n2: ";
    cin>>n2;
    cout<<"Enter the d2: ";
    cin>>d2;
    sum = (n1*d2 + n2*d1)/(d1*d2);
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}