//palindrome
#include<iostream>
using namespace std;

int main(){
    int n,t;
    int r = 0;
    cout<<"Enter a number:";
    cin>>n;
    int a = n;
    while (n != 0)    
    {
        t = n % 10;
        r = r * 10 + t;
        n = n / 10;
        
    }
    if (a==r)
    {
        cout<<"Yes, its palindrome!";
    }
    else{
        cout<<"No, its not a palindrome!";
    }
    return 0;
}