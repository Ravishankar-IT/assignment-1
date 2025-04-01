#include<iostream>
using namespace std;

int main()
{
    char ch; // p
    cout<<"Enter the char: ";
    cin>>ch;
    cout <<"ASCII value in dec: " << dec <<int(ch)<<endl; //112
    cout <<"ASCII value in oct: " << oct <<int(ch)<<endl; //160
    cout <<"ASCII value in hex: " << hex <<int(ch)<<endl; //70
    return 0;
} 