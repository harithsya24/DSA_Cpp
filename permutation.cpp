#include<iostream>
using namespace std;

int factorial(int n){
    int fact1= 1;
    for (int i = 1; i <= n; i++)
    {
        fact1 *= i;
    }
    return fact1;
}

int permutation(int n, int r){
    int a, b, c, d;
    int perm = 0;
    a = factorial(n);
    b = n-r;
    c = factorial(b);
    d = factorial(r);
    perm = a/(c*d);
    cout<<"The permutation of "<<n<< ", "<< r<<" is:"<< perm<<endl;
    return perm; 
}

int main(){
    int n, r;
    int per = 0;
    cout<<"Enter the n and r value respectively: ";
    cin>>n >> r;
    per = permutation(n,r);
    return 0;
}








