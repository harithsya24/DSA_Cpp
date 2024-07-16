#include<iostream>
using namespace std;

int factorial(int n){
    int fact1= 1;
    for (int i = 1; i <= n; i++)
    {
        fact1 = fact1 *i;
    }
    return fact1;
}
int main(){
    int n, facto;
    cout<<"Enter the number: ";
    cin>>n;
    facto = factorial(n);
    cout<<"The factorial of "<<n<<" is: "<<facto;
    return 0;
}
