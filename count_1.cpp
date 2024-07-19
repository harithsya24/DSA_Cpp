#include<iostream>
using namespace std;

int getBit(int n,int i){
    return ((n & (1<<i)) != 0);
}

int main(){
    int n, count=0;
    cout<<"Enter number: ";
    cin >> n;
    for (int i = 0; i < 6; i++)
    {
        int a = getBit(n,i);
        if (a == 1)
        {
            count++;
        }
        
    }
    cout << "Count of 1: "<<count;
    return 0;
    
}