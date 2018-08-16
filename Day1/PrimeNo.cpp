/*
    WAP to accept an integer N and print weather it's prime or not.
    */

#include<iostream>

using namespace std;

main(){
    int n, i;
    bool prime(int);
    
    cin>>n;
    cout<<prime(n);
}

bool prime(int n)
{
    int i;
    
    for(i=2; i<=n/2; ++i)
        if(n%i==0)
            return false;
    
    return true;
    
}