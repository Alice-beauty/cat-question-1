#include <iostream>
using namespace std;
int main()
{
    //this is the start of my program
    int r;
    int h;
    float A;
    float V;
    const float X;
    const float X= 3.141592;
    cout<<"Enter radius";
    cin>>radius;
    cout<<"Enter height";
    cin<<height;

    //logical formulae
    A=2*X*r*h+2*X*r*r;
    V=X*r*r*h;

    //output
    cout<<"Area of the cylinder is : \n";
    cout<<A;
    cout<<"Volume of the cylinder is: \n";
    cout<<V;
    return 0;
}