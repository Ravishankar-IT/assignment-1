#include<iostream>
using namespace std;

int main()
{
    int ch; 
    cout<<"Enter the number: "; //between 65-90
    cin>>ch;
    cout <<"ASCII value in dec: " << dec <<char(ch)<<endl; 
    cout <<"ASCII value in oct: " << oct <<int(ch)<<endl; 
    cout <<"ASCII value in hex: " << hex <<int(ch)<<endl; 
    return 0;
} 