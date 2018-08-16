/*
    WAP to print the maximum of two number without using if-else, 
    looping, ternary, switch.
    */

#include<iostream>

using namespace std;

main(){
    int x, y;
    
    cin>>x>>y;
    
    int z=(x>y)*x + (y>x)*y;
    
    cout<<z;
}