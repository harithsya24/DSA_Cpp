#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    do
    {
        cout<<"The number is: "<<n;
        cout<<"Enter the number:";
        cin>>n;
    } while (n > 0);
    

    return 0;
}