#include<iostream>
using namespace std;
int main()
{
    int leg,head;
    cout<<"Enter the number of legs: ";
    cin>>leg;
    cout<<"Enter the number of heads: ";
    cin>>head;
    int chicken = (4*head-leg)/2;
    int dog = head - chicken;
    cout<<"The number of chickens are: "<<chicken<<endl;
    cout<<"The number of dogs are: "<<dog<<endl;

 
   
    return 0;
}