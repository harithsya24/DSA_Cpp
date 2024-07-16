#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >>n;
    int temp=n;
    int digit;
    int cube= 0;
    int num = 0;

    while (temp > 0)
    {
        digit = temp % 10;
        cube = pow(digit,3);
        num = num +cube;
        temp = temp / 10;
    }
    if (num == n)
    {
        cout<<("Yes, it is armstrongnumber");
    }
    else{
        cout<<("No, it is not armstrong number!");
    }
    
    
}