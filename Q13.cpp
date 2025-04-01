#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int x1,x2,y1,y2;
    cout<<"Enter the x1: ";
    cin>>x1;
    cout<<"Enter the y1: ";
    cin>>y1;
    cout<<"Enter the x2: ";
    cin>>x2;
    cout<<"Enter the y2: ";
    cin>>y2;
    cout<<"The euclidean distance between two coordinates is: "<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) <<endl;
   return 0;
}