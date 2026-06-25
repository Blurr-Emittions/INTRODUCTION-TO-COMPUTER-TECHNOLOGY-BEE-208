/*Write a C++ program that takes in three integer values from the user and checks if they
are equal using the equality operator. If they are equal, print "Equal" to the screen,
otherwise print "Not equal".*/

#include <iostream>
using namespace std;
int main(){

    int first,second,third;
    cout<<"Enter first number:";
    cin>>first;

    cout <<"enter second number:";
    cin>>second;

    cout <<"enter third number:";
    cin>>third;
    
    if (first==second && second==third){
        cout<<"Equal";

    }

    else{
        cout<<"Not Equal";
    }


return 0;
}