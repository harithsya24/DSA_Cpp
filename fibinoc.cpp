#include<iostream>
using namespace std;

int fib(int n){
    int t= 0;
    int t1= 0;
    int t2 = 1;
    cout<< t1<<"\t";
    cout<< t2<< "\t";
    for(int i=0;i< n-2;i++){
        t = t1 + t2; 
        t1 = t2; 
        t2 = t;       
        cout<<t<< "\t"; 
    }
    return t;
}

int main(){
    int n;
    int fi = 0; 
    cout<<"Enter the number: ";
    cin >> n;
    fi = fib(n);
    return 0;
}