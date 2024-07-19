#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;

    if ((n & (n-1))==0)
    {
        cout<<"Yes, it is power of 2";
    }
    else{
        cout <<"No, its not power of 2";
    }
    return 0;

}