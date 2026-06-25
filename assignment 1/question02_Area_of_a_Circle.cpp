//Area of a circle
/*write a C++ program that calculates the area of a circle given the radius as input from the
user. Use the formula pi*r^2 and use the exponentiation operator to calculate the squared
radius.*/

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int radius;
    double Area;
    double pi = 3.142;
    cout<<"Input Radius:";
    cin>>radius;
    Area =pi*pow(radius,2);
    cout<<"The Area is "<<Area<<endl;
    

}