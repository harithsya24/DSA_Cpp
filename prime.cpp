#include<iostream>
using namespace std;

int main(){
    int a,b;
    bool prime = true;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number a: ";
    cin>>b;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    
    if (prime == false){
        cout<<"Not prime";
    }
    else
    {
        cout<<"Prime number";
    }
    return 0;
    
}