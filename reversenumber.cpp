//reverse number
#include<iostream>
using namespace std;

int main(){
    int n,t;
    int r = 0;
    cout<<"Enter a number:";
    cin>>n;
    
    while (n != 0)    
    {
        t = n % 10;
        r = r * 10 + t;
        n = n / 10;
        
    }
    cout<<r;
    return 0;
}