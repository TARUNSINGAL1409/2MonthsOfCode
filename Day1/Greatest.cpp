/*
    WAP to print the greatest fo three numbers.
    */

#include<iostream>

using namespace std;

main(){
    int x, y, z, max;
    
    cin>>x>>y>>z;
    
    if(x>y){
        if(x>z)
            max=x;
    }
    else if(y>x){
        if(y>z)
            max=y;
    }
    else if(z>x){
        if(z>y)
            max=z;
    }
    
    cout<<max;
}